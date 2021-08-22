#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <iostream>
#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

using namespace std;

class Application
{
private:
	unsigned int WIDTH, HEIGHT;
	float mouse_pos_x;
	float mouse_pos_y;
	GLFWwindow* window;
public:
	Application(unsigned int WIDTH, unsigned int HEIGHT);
};

#endif APPLICATION_HPP
