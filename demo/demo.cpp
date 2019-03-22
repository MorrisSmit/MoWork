// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <potatoEngine/renderer.h>
#include <potatoEngine/camera.h>
#include <potatoEngine/sprite.h>
#include <potatoEngine/entity.h>

int main( void )
{
	Renderer renderer(1280, 720);

	//Sprite* pencils = new Sprite("assets/pencils.tga");
	//Sprite* kingkong = new Sprite("assets/kingkong.tga");
	//Sprite* rgba = new Sprite("assets/rgba.tga");

	Scene* scene = new Scene();
	Entity* kingkong = new Entity();
	kingkong->addSprite("assets/kingkong.tga");

	kingkong->xpos = 960;
	kingkong->ypos = 540;
	kingkong->xscale = 1;
	kingkong->yscale = 1;
	kingkong->rotation = 0;


	scene->addChild(kingkong);



	float rot_z = 0.0f;

	do {
		// Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Compute the ViewMatrix from keyboard and mouse input (see: camera.h/cpp)

		//glm::vec3 cursor = getCursor(); // from Camera
		//printf("(%f,%f)\n",cursor.x, cursor.y);

		// Render the sprite (Sprite*, xpos, ypos, xscale, yscale, rotation)
		//renderer.renderScene(scene);

		renderer.renderScene(scene);
		kingkong->rotation += 0.03f;

		// Swap buffers
		glfwSwapBuffers(renderer.window());
		glfwPollEvents();

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   glfwWindowShouldClose(renderer.window()) == 0 );

	delete kingkong;

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
