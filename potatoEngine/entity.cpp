#include <potatoEngine/entity.h>


Entity::Entity()
{
	_sprite = nullptr;
	pos = glm::vec3(0, 0, 0);
	rot = glm::vec3(0, 0, 0);
	scale = glm::vec2(0, 0);

}

Entity::~Entity()
{

}

void Entity::update(float deltatime)
{

}


void Entity::addChild(Entity* ent)
{
	_children.push_back(ent);
	ent->parent = this;
}

void Entity::addSprite(std::string filepath)
{
	_sprite = nullptr;
	_sprite = new Sprite(filepath);
}
