#version 330 core
layout (location = 0) in vec3 position;
layout (location = 1) in vec3 normal;
layout (location = 2) in vec2 texCoords;

out vec3 out_normal;
out vec3 out_frag_position;
out vec2 out_texcoords;
out vec4 out_frag_position_lightSpace;

uniform mat4 projection_matrix;
uniform mat4 view_matrix;
uniform mat4 model_matrix;
uniform mat4 lightSpaceMatrix;


void main() {
    out_texcoords = texCoords;
    out_normal = mat3(transpose(inverse(model_matrix))) * normal;
    out_frag_position=vec3(model_matrix * vec4(position,1.0));
    out_frag_position_lightSpace = lightSpaceMatrix * vec4(out_frag_position, 1.0);
    gl_Position = projection_matrix * view_matrix * vec4(position, 1.0);
}
