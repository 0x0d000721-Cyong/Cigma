#pragma once

#ifdef CGA_PLATFORM_WINDOWS
	#pragma warning(disable: 4251)
#endif

#ifdef CGA_PLATFORM_WINDOWS
	#ifdef CGA_BUILD_DLL
		#define CGA_API __declspec(dllexport)
	#else
		#define CGA_API __declspec(dllimport)
	#endif
#else 
	#error Cigma only support windows !
#endif
