#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions_3_3_Core>
#include <string>
#include <vector>
using namespace std;
struct Vertex {
    QVector3D       position;
    QVector3D       normal;
    QVector2D       texCoords;
};
struct Texture {
    unsigned int    id;
    string          type;
    string          path;
};

class Mesh {
public:
    // mesh data
    vector<Vertex>          m_vVertices;
    vector<unsigned int>    m_vIndices;
    vector<Texture>         m_vTextures;

    void Draw(QOpenGLShaderProgram &shader);
    Mesh(QOpenGLFunctions_3_3_Core *glFuns,
         vector<Vertex> vVertices, vector<unsigned int> vIndices, vector<Texture> vTextures);
private:
    // render data
    unsigned int VAO, VBO, EBO;
    void SetupMesh();
private: QOpenGLFunctions_3_3_Core *m_glFuns;
};
