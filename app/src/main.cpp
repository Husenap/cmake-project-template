#include <GLFW/glfw3.h>

#include <iostream>

void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mode) {
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, true);
	}
}

int main() {
	if (!glfwInit()) {
		return 1;
	}

	GLFWwindow* window = glfwCreateWindow(800, 600, "cmake+conan project template", nullptr, nullptr);

	if (!window) {
		return 1;
	}

	glfwSetKeyCallback(window, KeyCallback);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}