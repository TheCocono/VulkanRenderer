#pragma once

#include "VulkanEditor.h"
#include "VulkanEditorPipeline.h"

namespace VulkanEditor {

	class App {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		VulkanWindow vulkanWindow{ WIDTH, HEIGHT, "Hello world!"};
		VulkanEditorPipeline vulkanEditorPipeline{ "simple_shader.vert.spv", "simple_shader.frag.spv" };
	};
}