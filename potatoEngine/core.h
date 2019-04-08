#ifndef CORE_H
#define CORE_H

#include <gl/glew.h>
#include <glfw3.h>
#include<potatoEngine/scene.h>
#include<potatoEngine/renderer.h>
#include<potatoEngine/entity.h>
#include<potatoEngine/camera.h>
#include<potatoEngine/input.h>
#include<iostream>

class Core
{
public:

   Core();

   ~Core();

   Renderer renderer;

   Input input;


   void renderScene(Scene* scene);

   float deltaTime() { return _deltaTime;  };

private:
	float _deltaTime;

	float calculateDeltaTime();
		
};

#endif // !CORE_H
