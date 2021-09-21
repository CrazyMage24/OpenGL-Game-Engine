#ifndef WINDOW_H
#define WINDOW_H

#include "Model.h"

class Window
{
private:
	unsigned int WIDTH, HEIGHT;
	float mouse_pos_x;
	float mouse_pos_y;
public:
	Window(unsigned int WIDTH, unsigned int HEIGHT);
};

#endif WINDOW_H