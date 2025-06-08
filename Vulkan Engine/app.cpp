#include "app.h"

namespace VulkanEditor {

	void App::run() {

		while (!vulkanWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}