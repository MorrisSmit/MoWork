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
	scene->getCamera()->computeMatricesFromInputs(renderer.window());
	 glm::mat4 _viewmatrix = scene->getCamera()->getViewMatrix();
	for (int i = 0; i < scene->children.size(); i++)
	{
		renderer.renderEntity(scene->children[i]);
	}
}

