#pragma once
#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Foxin {

	class FOXIN_API Logger {

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger;
		}
	};

}

//Core Logger makros
#define FX_CORE_TRACE(...)       ::Foxin::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define FX_CORE_DEBUG(...)       ::Foxin::Logger::GetCoreLogger()->debug(__VA_ARGS__)
#define FX_CORE_INFO(...)        ::Foxin::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define FX_CORE_WARN(...)        ::Foxin::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define FX_CORE_ERROR(...)       ::Foxin::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define FX_CORE_CRITICAL(...)    ::Foxin::Logger::GetCoreLogger()->critical(__VA_ARGS__)

//Client Logger makros
#define FX_CLIENT_TRACE(...)     ::Foxin::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define FX_CLIENT_DEBUG(...)     ::Foxin::Logger::GetClientLogger()->debug(__VA_ARGS__)
#define FX_CLIENT_INFO(...)      ::Foxin::Logger::GetClientLogger()->info(__VA_ARGS__)
#define FX_CLIENT_WARN(...)      ::Foxin::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define FX_CLIENT_ERROR(...)     ::Foxin::Logger::GetClientLogger()->error(__VA_ARGS__)
#define FX_CLIENT_CRITICAL(...)  ::Foxin::Logger::GetClientLogger()->critical(__VA_ARGS__)

