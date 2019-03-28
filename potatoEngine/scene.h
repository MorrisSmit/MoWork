#ifndef SCENE_H
#define SCENE_H

#include <potatoEngine/sprite.h>
#include <potatoEngine/camera.h>
#include <potatoEngine/entity.h>
#include <vector>


class Scene : public Entity
{

public:
	Scene();
	~Scene();

	bool isRunning;



	Camera* getCamera() { return _camera; };

private:
	Camera* _camera;


};



#endif // !SCENE_H
