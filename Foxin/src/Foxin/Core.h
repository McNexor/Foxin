#pragma once

#ifdef FX_PLATFORM_WINDOWS
	#ifdef FX_BUILD_DLL
		#define FOXIN_API __declspec(dllexport)
	#else
		#define FOXIN_API __declspec(dllimport)
	#endif
#else
	#error Foxin only supports Windows!
#endif
