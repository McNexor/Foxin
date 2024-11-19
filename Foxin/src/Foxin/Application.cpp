#include "fxpre.h"
#include "Application.h"
#include "Foxin/Events/ApplicationEvent.h"
#include "Foxin/Logger.h"

namespace Foxin {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {}

	void Application::Run() {

		while (m_Running) {
			m_Window->OnUpdate();
			m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
		}

	}

	void Application::OnEvent(Event& e) {
		EventDispatcher dispatcher(e);
		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));
		FX_CORE_TRACE("{0}", e.ToString());
	}

	bool Application::OnWindowClose(WindowCloseEvent& e) {
		m_Running = false;
		return true;
	}

}