#include "src/graphics/window.h"

int main()
{
	using namespace engine;
	using namespace graphics;

	Window window("Engine", 960, 540);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	std::cout << glGetString(GL_VERSION) << std::endl;


	while (!window.closed())
	{
		window.clear();
		glBegin(GL_QUADS);
		glVertex2d(-0.5f, -0.5f);
		glVertex2d(-0.5f,  0.5f);
		glVertex2d( 0.5f,  0.5f);
		glVertex2d( 0.5f, -0.5f);
		glEnd();
		window.update();
	}
	
	return 0;
}