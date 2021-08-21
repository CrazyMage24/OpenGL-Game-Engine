#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Application
{
private:
	unsigned int WIDTH, HEIGHT;
	GLFWwindow* window;
public:
	Application(unsigned int WIDTH, unsigned int HEIGHT);
	void GLFWInit();
	void createWindow();
	void Loop();
	void Destroy();
};

#endif APPLICATION_HPP
