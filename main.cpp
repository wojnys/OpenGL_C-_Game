﻿
#include <GL/glew.h>
#include <GLFW/glfw3.h>  

#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/gtc/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale, glm::perspective
#include <glm/gtc/type_ptr.hpp> // glm::value_ptr

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "Application.h"
int main() {

	Application* app = new Application();
	app->initialization(); 
	app->createShaders();  
	app->createTextures();  
	app->createModels();   
	app->createLights();    
	app->run();            
	delete app;          
} 