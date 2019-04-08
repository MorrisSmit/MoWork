#ifndef INPUT_H
#define INPUT_H


#include <GL/glew.h>
#include <glfw3.h>
#include<vector>

class Input
{
public:

   // Input constructor
   Input();

   // Input destructor
   ~Input();
private:
	GLFWwindow* _window;
	bool getKeyDown(int key);
	bool getKeyUp(int key);
	bool getKey(int key);

	
	std::vector<bool> _keys; 
	std::vector<bool> _keysUp; 
	std::vector<bool> _keysDown; 



};

#endif // !INPUT_H
