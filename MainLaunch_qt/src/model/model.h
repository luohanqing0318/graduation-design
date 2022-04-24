#ifndef MODEL_H
#define MODEL_H
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "src/mesh/mesh.h"
class Model {
public:
    vector<Texture> textures_loaded;
    Model(QOpenGLFunctions_3_3_Core *glfuns, const char *path) :m_glFuns(glfuns) {
        m_glFuns = glfuns;
        LoadModel(path);
    }
    void Draw(QOpenGLShaderProgram &shader) {
        for(unsigned int i = 0; i < meshes.size(); i++)
            meshes[i].Draw(shader);

    }

private:
    // model data
    QOpenGLFunctions_3_3_Core *m_glFuns;
    vector<Mesh> meshes;
    string directory;
    void LoadModel(string path);

    void ProcessNode(aiNode *node, const aiScene *scene);
    Mesh ProcessMesh(aiMesh *mesh, const aiScene *scene);
    vector<Texture> LoadMaterialTextures(aiMaterial *mat, aiTextureType type, string typeName);
    unsigned int TextureFromFile(const char *path, const string &directory);
};

#endif // MODEL_H
