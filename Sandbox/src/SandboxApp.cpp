#include "fxpre.h"
#include "Foxin.h"

class Sandbox : public Foxin::Application {
public:
	Sandbox() {}
	~Sandbox() {}

};

Foxin::Application* Foxin::CreateApplication() {
	return new Sandbox();
}
