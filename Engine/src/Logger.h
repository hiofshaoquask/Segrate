#pragma once

#include <memory>

#include "SegrateCore.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Segrate {
	class SG_API Logger {
	private:
		static std::shared_ptr<spdlog::logger> engine_logger;
		static std::shared_ptr<spdlog::logger> client_logger;
	public:
		static void init();

		static inline std::shared_ptr<spdlog::logger>& getEngineLogger() { return engine_logger; }
		static inline std::shared_ptr<spdlog::logger>& getClientLogger() { return client_logger; }
	};
}

#define SG_CLIENT_TRACE(...) Segrate::Logger::client_logger->trace(__VA_ARGS__);
#define SG_CLIENT_TRACE(...) Segrate::Logger::client_logger->debug(__VA_ARGS__);
#define SG_CLIENT_TRACE(...) Segrate::Logger::client_logger->warn(__VA_ARGS__);
#define SG_CLIENT_TRACE(...) Segrate::Logger::client_logger->error(__VA_ARGS__);
#define SG_CLIENT_TRACE(...) Segrate::Logger::client_logger->critical(__VA_ARGS__);
