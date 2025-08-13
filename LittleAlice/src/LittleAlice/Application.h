#pragma once

#include "Core.h"

namespace LittleAlice {
	class LITTLEALICE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defind in CLIENT
	Application* CreateApplication();
}
