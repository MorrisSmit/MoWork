#include <potatoEngine/entity.h>


Entity::Entity()
{
	_sprite = nullptr;
	xpos = 0;
	ypos = 0;
	xscale = 0;
	yscale = 0;
	rotation = 0;
}

Entity::~Entity()
{

}

void Entity::addSprite(std::string filepath)
{
	_sprite = nullptr;
	_sprite = new Sprite(filepath);
}

Sprite* Entity::getSprite()
{
	return _sprite;
}