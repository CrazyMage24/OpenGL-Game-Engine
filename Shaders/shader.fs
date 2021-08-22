#version 460 core

out vec4 FragColor;

uniform float mouse_x;
uniform float mouse_y;
uniform float time;

void main()
{
	vec4 color = vec4(0.8f, 0.5f, 0.1f, 1.0f);
	float light = abs(sin(time));
	FragColor =  color * light;
}