#pragma once

#include "Core.h"

namespace Foxin {

	class FOXIN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined by client
	Application* CreateApplication();

}
