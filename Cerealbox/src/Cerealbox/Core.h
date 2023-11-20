#pragma once
#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define CEREALBOX_API __declspec(dllexport)
	#else
		#define CEREALBOX_API __declspec(dllimport)
	#endif
#else
	#error Cerealbox only supports windows
#endif