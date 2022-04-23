#include "mesh.h"

Mesh::Mesh(QOpenGLFunctions_3_3_Core *glFuns,
           vector<Vertex> vertices,
           vector<unsigned int> indices,
           vector<Texture> textures):m_glFuns(glFuns)
{
        this->vertices = vertices;
        this->indices = indices;
        this->textures = textures;

}

void Mesh::Draw(QOpenGLShaderProgram &shader)
{

}

void Mesh::SetupMesh()
{

}
