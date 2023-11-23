#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cerealbox {

	class CEREALBOX_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

//Core log macros
#define CB_CORE_TRACE(...)   ::Cerealbox::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CB_CORE_INFO(...)    ::Cerealbox::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CB_CORE_WARN(...)    ::Cerealbox::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CB_CORE_ERROR(...)   ::Cerealbox::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CB_CORE_FATAL(...)   ::Cerealbox::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client log macros
#define CB_TRACE(...)   ::Cerealbox::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CB_INFO(...)    ::Cerealbox::Log::GetClientLogger()->info(__VA_ARGS__)
#define CB_WARN(...)    ::Cerealbox::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CB_ERROR(...)   ::Cerealbox::Log::GetClientLogger()->error(__VA_ARGS__)
#define CB_FATAL(...)   ::Cerealbox::Log::GetClientLogger()->fatal(__VA_ARGS__)