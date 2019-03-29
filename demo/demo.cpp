// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <potatoEngine/renderer.h>
#include <potatoEngine/camera.h>
#include <potatoEngine/sprite.h>
#include <potatoEngine/entity.h>
#include <potatoEngine/core.h>

int main( void )
{
	
	Core core;
	
	Scene* scene = new Scene();
	Entity* kingkong = new Entity();
	kingkong->addSprite("assets/kingkong.tga");

	kingkong->xpos = 960;
	kingkong->ypos = 540;
	kingkong->xscale = 1;
	kingkong->yscale = 1;
	kingkong->rotation = 0;
	
	scene->isRunning = true;

	scene->addChild(kingkong);




	float rot_z = 0.0f;

	do {


		//glm::vec3 cursor = getCursor(); // from Camera
		//printf("(%f,%f)\n",cursor.x, cursor.y);

		// Run the scene 
		core.renderScene(scene);

		// Rotate our big boi
		kingkong->rotation += 0.03f;

		// Swap buffers
		glfwSwapBuffers(core.renderer.window());
		glfwPollEvents();

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(core.renderer.window(), GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   glfwWindowShouldClose(core.renderer.window()) == 0 );

	delete kingkong;

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
