#version 330 core
out vec4 FragColor;
in vec2 TexCoords;
struct Material {
    sampler2D texture_diffuse1;
};
uniform Material material;


void main() {
    float depthValue = texture(material.texture_diffuse1, TexCoords).r;
    // FragColor = vec4(vec3(LinearizeDepth(depthValue) / far_plane), 1.0); // perspective
    FragColor = vec4(vec3(depthValue), 1.0); // orthographic
}
