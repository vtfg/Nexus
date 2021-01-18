#pragma once

#include <spdlog/spdlog.h>

namespace Nexus {

	class Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> coreLogger;
		static std::shared_ptr<spdlog::logger> clientLogger;
	};

}

// Core Macros

#define NEXUS_CORE_TRACE(...) ::Nexus::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NEXUS_CORE_INFO(...) ::Nexus::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NEXUS_CORE_WARN(...) ::Nexus::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NEXUS_CORE_ERROR(...) ::Nexus::Log::GetCoreLogger()->error(__VA_ARGS__)

// Client Macros

#define NEXUS_TRACE(...) ::Nexus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NEXUS_INFO(...) ::Nexus::Log::GetClientLogger()->info(__VA_ARGS__)
#define NEXUS_WARN(...) ::Nexus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NEXUS_ERROR(...) ::Nexus::Log::GetClientLogger()->error(__VA_ARGS__)
