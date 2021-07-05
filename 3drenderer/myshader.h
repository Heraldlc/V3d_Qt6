#ifndef MYSHADER_H
#define MYSHADER_H


class shader
{
public:
    //程序ID
    unsigned int ID;

    shader(const GLchar* vertexPath, const GLchar* fragmentPath);

    //激活函数
    void use();
    //uniform工具函数
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};

#endif // MYSHADER_H
