#include "Application.h"

using namespace std;

const unsigned int WIDTH = 800;
const unsigned int HEIGHT = 800;

int main()
{
	Application app = Application(800, 800);
	app.Loop();
	app.Destroy();
	return 0;
}