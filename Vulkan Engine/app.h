#pragma once

#include "vulkan_window.h"

namespace VulkanEditor {

	class App {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		VulkanWindow vulkanWindow{ WIDTH, HEIGHT, "Hello world!"};
	};
}