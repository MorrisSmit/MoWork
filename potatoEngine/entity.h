#ifndef ENTITY_H
#define ENTITY_H


#include<vector>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#include<potatoEngine/sprite.h>


class Entity
{
	public:

		Entity();
		~Entity();
		virtual void update(float deltatime);

		float xpos;
		float ypos;
		float xscale;
		float yscale;
		float rotation;

		std::vector <Entity*> children;

		Entity* parent;

		void addChild(Entity* ent);
		
		Sprite* getSprite() { return _sprite; };


		void addSprite(std::string filepath);

	private:

		Sprite* _sprite;

	
};



#endif // !ENTITY_H
