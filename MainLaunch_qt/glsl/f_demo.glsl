#version 330 core

struct Material {
    sampler2D texture_diffuse1;
    sampler2D texture_specular1;
    float shininess;
};

struct Light {
    vec3 direction;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};
uniform Light light;
uniform Material material;

out vec4 frag_color;

in vec3 out_normal;
in vec3 out_frag_position;
in vec2 out_texcoords;


uniform vec3 view_position;


void main() {
    vec3 diffuseTexColor=vec3(texture(material.texture_diffuse1,out_texcoords));
    vec3 specularTexColor=vec3(texture(material.texture_specular1,out_texcoords));

    // ambient
    vec3 ambient = diffuseTexColor*light.ambient;
    // diffuse
    vec3 norm = normalize(out_normal);
    vec3 lightDir = normalize(-light.direction);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff *diffuseTexColor*light.diffuse;
    // specular


    vec3 viewDir = normalize(view_position - out_frag_position);
    vec3 reflectDir = reflect(-lightDir, norm);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
    vec3 specular =  spec*specularTexColor*light.specular;
    vec3 result = (ambient + diffuse + specular);

    frag_color = vec4(result, 1.0);
}
