#include "model.h"



void Model::LoadModel(string path)
{
       Assimp::Importer import;
       const aiScene *scene = import.ReadFile(path, aiProcess_Triangulate | aiProcess_FlipUVs);
       if(!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode) {
           qDebug() << "ERROR::ASSIMP::" << import.GetErrorString();
           return;
       }

       directory = path.substr(0, path.find_last_of('/'));
       ProcessNode(scene->mRootNode, scene);
}

void Model::ProcessNode(aiNode *node, const aiScene *scene)
{
    // process all the node's meshes (if any)
       for(unsigned int i = 0; i < node->mNumMeshes; i++) {
           aiMesh *mesh = scene->mMeshes[node->mMeshes[i]];
           meshes.push_back(ProcessMesh(mesh, scene));
       }
       // then do the same for each of its children
       for(unsigned int i = 0; i < node->mNumChildren; i++) {
           ProcessNode(node->mChildren[i], scene);
       }
}

Mesh Model::ProcessMesh(aiMesh *mesh, const aiScene *scene)
{

        vector<Vertex> vertices;
        vector<unsigned int> indices;
        vector<Texture> textures;
        for(unsigned int i = 0; i < mesh->mNumVertices; i++) {
            if(m_max_X < mesh->mVertices[i].x)
            {
                m_max_X = mesh->mVertices[i].x;
            }
            if(m_max_Y < mesh->mVertices[i].y)
            {
                m_max_Y = mesh->mVertices[i].y;
            }
            if(m_min_X > mesh->mVertices[i].x)
            {
                m_min_X = mesh->mVertices[i].x;
            }
            if(m_min_Y > mesh->mVertices[i].y)
            {
                m_min_Y = mesh->mVertices[i].y;
            }

            Vertex vertex;
            // 处理顶点位置、法线和纹理坐标
            QVector3D vector;
            vector.setX(mesh->mVertices[i].x);
            vector.setY(mesh->mVertices[i].y);
            vector.setZ(mesh->mVertices[i].z);
            vertex.position = vector;

            vector.setX(mesh->mNormals[i].x);
            vector.setY(mesh->mNormals[i].y);
            vector.setZ(mesh->mNormals[i].z);
            vertex.normal = vector;

            if(mesh->mTextureCoords[0]) // 有纹理坐标？
            {
                QVector2D vec;
                vec.setX(mesh->mTextureCoords[0][i].x);
                vec.setY(mesh->mTextureCoords[0][i].y);
                vertex.texCoords = vec;
            } else
                vertex.texCoords = QVector2D(0.0f, 0.0f);

            vertices.push_back(vertex);
        }
        // 处理索引
        for(unsigned int i = 0; i < mesh->mNumFaces; i++) {
            aiFace face = mesh->mFaces[i];
            for(unsigned int j = 0; j < face.mNumIndices; j++)
                indices.push_back(face.mIndices[j]);
        }

        // 处理材质
        if(mesh->mMaterialIndex >= 0) {
            aiMaterial *material = scene->mMaterials[mesh->mMaterialIndex];
            vector<Texture> diffuseMaps =
                    LoadMaterialTextures(material, aiTextureType_DIFFUSE, "texture_diffuse");
            textures.insert(textures.end(), diffuseMaps.begin(), diffuseMaps.end());
            vector<Texture> specularMaps =
                    LoadMaterialTextures(material, aiTextureType_SPECULAR, "texture_specular");
            textures.insert(textures.end(), specularMaps.begin(), specularMaps.end());
        }
        return Mesh(m_glFuns, vertices, indices, textures);
}

vector<Texture> Model::LoadMaterialTextures(aiMaterial *mat, aiTextureType type, string typeName)
{
    vector<Texture> textures;
        for(unsigned int i = 0; i < mat->GetTextureCount(type); i++) {
            aiString str;
            mat->GetTexture(type, i, &str);
            bool skip = false;
            for(unsigned int j = 0; j < textures_loaded.size(); j++) {//防止有重复的纹理
                if(std::strcmp(textures_loaded[j].path.data(), str.C_Str()) == 0) {
                    textures.push_back(textures_loaded[j]);
                    skip = true;
                    break;
                }
            }
            if(!skip){
                Texture texture;
                texture.id = TextureFromFile(str.C_Str(), directory);
                texture.type = typeName;
                texture.path = str.C_Str();
                textures.push_back(texture);
                textures_loaded.push_back(texture);
            }
        }
        return textures;
}

unsigned int Model::TextureFromFile(const char *path, const string &directory)
{
        string filename = string(path);
        filename = directory + '/' + filename;

        QOpenGLTexture * texture = new QOpenGLTexture(QImage(filename.c_str()).mirrored());
        if(texture==NULL) qDebug()<<"texture is NULL";
        else qDebug()<<filename.c_str()<<"loaded";

        return texture->textureId();
}
