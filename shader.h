#ifndef SHADER_H
#define SHADER_H
#include <GL/glew.h>
#include <string>


class Shader
{
public:
	Shader(const std::string& fileName);
	
	void Bind();

	virtual ~Shader();

protected:
private:
	static const unsigned int NUM_SHADERS = 2;
	Shader(const Shader& other) {}
	void operator=(const Shader& other) {}

	std::string LoadShader(const std::string& fileName);
	void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
	GLuint CreateShader(const std::string& text, unsigned int type);

	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
};


#endif // SHADER_H
