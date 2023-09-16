#pragma once

#ifdef YZ_PLATFORM_WINDOWS
	#ifdef YZ_BUILD_DLL
		#define YAZEL_API __declspec(dllexport)
	#else
		#define YAZEL_API __declspec(dllimport)
	#endif
#else
	#error Yazel only supports Windows !
#endif