#include "Logger.h"

namespace Segrate {
	std::shared_ptr<spdlog::logger> Logger::client_logger;
	std::shared_ptr<spdlog::logger> Logger::engine_logger;

	void Logger::init() {
		spdlog::set_level(spdlog::level::trace);
		spdlog::set_pattern("[%T] %n: %v");

		engine_logger = spdlog::stdout_color_mt("Segrate");
		client_logger = spdlog::stdout_color_mt("Sandbox");
	}
}
