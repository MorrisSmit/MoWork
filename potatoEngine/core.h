#ifndef CORE_H
#define CORE_H

#include<potatoEngine/scene.h>
#include<potatoEngine/renderer.h>
#include<potatoEngine/entity.h>
#include<potatoEngine/camera.h>
#include<iostream>

class Core
{
public:

   Core();

   ~Core();

private:
	Scene * scene;
	Renderer _renderer;
	
};

#endif // !CORE_H
