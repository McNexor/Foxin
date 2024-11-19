#include "Application.h"
#include "Foxin/Events/ApplicationEvent.h"
#include "Foxin/Logger.h"

namespace Foxin {

	Application::Application() {}
	Application::~Application() {}

	void Application::Run() {

		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication)) {
			FX_CLIENT_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput)) {
			FX_CLIENT_TRACE(e.ToString());
		}

		while (true) { }
	}

	

}