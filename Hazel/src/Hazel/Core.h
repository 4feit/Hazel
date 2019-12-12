#pragma once

#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport) // is a storage-class specifier that tells the compiler that a function or object or data type is defined in an external DLL. It means that the definition of the function is in a dynamic library.
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif

#else
#error Hazel only support Windows
#endif