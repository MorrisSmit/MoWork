#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h>
#include <glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#include <potatoEngine/sprite.h>
#include <potatoEngine/scene.h>

class Renderer
{
	public:
		Renderer(unsigned int w = 1280, unsigned int h = 720);
		virtual ~Renderer();

		void setViewMatrix(glm::mat4 vm) { _viewMatrix = vm; };

		void renderEntity(Entity* ent);

		//void renderSprite(Sprite* sprite, float px, float py, float sx, float sy, float rot);
		GLFWwindow* window() { return _window; };

		unsigned int width() { return _window_width; };
		unsigned int height() { return _window_height; };

	private:
		int init();

		glm::mat4 _viewMatrix;

		GLFWwindow* _window;
		unsigned int _window_width;
		unsigned int _window_height;

		GLuint loadShaders(
			const char* vertex_file_path,
			const char* fragment_file_path
		);

		GLuint _programID;

		glm::mat4 _projectionMatrix;
};

#endif /* RENDERER_H */
