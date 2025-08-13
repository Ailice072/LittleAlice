#pragma once

#ifdef LA_PLATFORM_WINDOWS
	#ifdef LA_BUILD_DLL
		#define LITTLEALICE_API __declspec(dllexport)
	#else
		#define LITTLEALICE_API __declspec(dllexport)
	#endif
#else
	#error LittleAlice only support windows!
#endif // LA_PLATFORM_WINDOWS

