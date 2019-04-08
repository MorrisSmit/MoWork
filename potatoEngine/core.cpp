#include <potatoEngine/core.h>


Core::Core()
{
	
}

Core::~Core()
{
   
}

float Core::calculateDeltaTime()
{
	static float lastTime = glfwGetTime();
	float currentTime = glfwGetTime();

	_deltaTime = currentTime - lastTime;
	lastTime = currentTime;
	return _deltaTime;
}

void Core::renderScene(Scene* scene)
{

	// Clear the screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Get the viewmatrix from the camera
	scene->getCamera()->computeMatricesFromInputs(renderer.window());
	glm::mat4 _viewMatrix = scene->getCamera()->getViewMatrix();
	renderer.setViewMatrix(_viewMatrix);

	// Tell the renderer to render all the entities in the scene
	for (int i = 0; i < scene->children.size(); i++)
	{
		renderer.renderEntity(scene->children[i]);
	}
}

