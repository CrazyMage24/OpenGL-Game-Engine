#include "Application.h"

Application::Application(unsigned int WIDTH, unsigned int HEIGHT)
{
	this->WIDTH = WIDTH;
	this->HEIGHT = HEIGHT;

	GLFWInit();
	createWindow();

	
	//Load GLAD so it configures OpenGL
	gladLoadGL();
	// Specify the viewport of OpenGL in the Window
	// In this case the viewport goes from x = 0, y = 0, to x = 800, y = 800
	glViewport(0, 0, WIDTH, HEIGHT);

	// Specify the color of the background
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// Clean the back buffer and assign the new color to it
	glClear(GL_COLOR_BUFFER_BIT);
	// Swap the back buffer with the front buffer
	glfwSwapBuffers(window);
}

void Application::GLFWInit()
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using 
	// In this case we are using OpenGL 4.6
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}


void Application::createWindow()
{
	// Create a GLFWwindow object of WIDTH by HEIGHT pixels, naming it "OpenGL Game Engine"
	window = glfwCreateWindow(WIDTH, HEIGHT, "OpenGL Game Engine", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);
}

void Application::Loop()
{
	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Take care of all GLFW events
		glfwPollEvents();
	}
}
void Application::Destroy()
{
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
}