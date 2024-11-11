#include "Logger.h"

namespace Foxin {

	std::shared_ptr<spdlog::logger> Logger::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Logger::s_ClientLogger;

	void Logger::init() {
		spdlog::set_pattern("%^%[T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("FOXIN");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_ClientLogger = spdlog::stdout_color_mt("CLIENT");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}

