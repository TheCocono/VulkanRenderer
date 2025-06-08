#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace VulkanEditor {

	class VulkanWindow {

	public:
		VulkanWindow(int w, int h, std::string name);
		~VulkanWindow();

		VulkanWindow(const VulkanWindow&) = delete;
		VulkanWindow& operator=(const VulkanWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }

	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;
	};
}