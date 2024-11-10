#pragma once
#ifdef FX_PLATFORM_WINDOWS

extern Foxin::Application* Foxin::CreateApplication();

int main(int argc, char** argv) {
	auto engine = Foxin::CreateApplication();
	engine->Run();
	delete engine;
}

#else
	#error Foxin only supports Windows!
#endif