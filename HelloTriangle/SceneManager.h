#pragma once

#include "Shader.h"

// GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <GLFW/glfw3.h>


class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	void initialize(GLuint width, GLuint height);
	void initializeGraphics();

	void addShader(string vFilename, string fFilename);

	//GLFW callbacks
	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
	static void resize(GLFWwindow* window, int width, int height);

	bool check_colision(int posicaoPlayerMapaX, int posicaoPlayerMapaY);
	void do_movement();
	void renderBackGround();
	void renderPlayer();
	void run();
	void finish();


	// scene
	void setupScene();
	void setupPlayer();
	void InitScene();
	void setupCamera2D();
	void setupTexture(int textura); //apenas mostra como criar uma textura

	static void mouseButtonCallback(GLFWwindow *window , int button, int action, int mods);
	void check_colision_clickMouse();

private:
	
	//GFLW 

	GLFWwindow *window;

	//our shader program
	Shader *shader;

	//scene attributes
	GLuint VAO;

	//Transformations - Model Matrix
	glm::mat4 model;

	//2D Camera - Projection matrix
	glm::mat4 projection;

	//Texture index
	unsigned int texture;

};

