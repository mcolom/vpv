#pragma once

#include <string>

#include <SFML/Graphics/Shader.hpp>

#define SHADER_CODE_SIZE (1<<14)

struct Shader {
    std::string ID;
    std::string name;

    char codeVertex[SHADER_CODE_SIZE];
    char codeFragment[SHADER_CODE_SIZE];

    Shader();
    ~Shader();

    bool compile();
    void bind();

    void setParameter(const std::string& name, float a, float b, float c);

private:
    unsigned int program;
};

