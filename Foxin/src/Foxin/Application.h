#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Foxin/Events/ApplicationEvent.h"
#include "Window.h"

namespace Foxin {

	class FOXIN_API Application {

	public:

		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

	private:

		bool OnWindowClose(WindowCloseEvent& e);

		bool m_Running = true;
		std::unique_ptr<Window> m_Window;

	};

	// To be defined by client
	Application* CreateApplication();

}
