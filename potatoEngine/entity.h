#ifndef ENTITY_H
#define ENTITY_H

#include<potatoEngine/sprite.h>
#include<vector>#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>


class Entity
{
	private:
		Sprite* _sprite;

		float xpos;
		float ypos;
		float xscale;
		float yscale;
		float rotation;
		
		

	public:
		Entity();
		~Entity();
		Sprite* getSprite();
		void addSprite(std::string filepath);
}



#endif // !ENTITY_H
