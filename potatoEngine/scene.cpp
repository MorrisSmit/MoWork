#include <potatoEngine/scene.h>


Scene::Scene()
{
	
}

Scene::~Scene()
{

}

void Scene::addEntity(Entity* ent)
{
	_entities.push_back(ent);
}


