#pragma once
#ifdef FX_PLATFORM_WINDOWS

extern Foxin::Application* Foxin::CreateApplication();

int main(int argc, char** argv) {
	Foxin::Logger::init();
	FX_CORE_WARN("Init successful!");
	int a = 5;
	FX_CLIENT_INFO("Init successful! Var={0}", a);
	auto engine = Foxin::CreateApplication();
	engine->Run();
	delete engine;
}

#else
	#error Foxin only supports Windows!
#endif