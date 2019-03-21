#ifndef SCENE_H
#define SCENE_H

#include <potatoEngine/sprite.h>
#include <potatoEngine/camera.h>
#include <potatoEngine/entity.h>
#include <vector>


class Scene
{
private:
	Camera _camera;
	std::vector <Entity*> _entities;

public:
	Scene();
	~Scene();

	void addEntity(Entity* ent);

	Camera getCamera() {return _camera}
	int entitiesLength() {return _entities.size()}
}



#endif // !SCENE_H
