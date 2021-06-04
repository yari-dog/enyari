#pragma once


#ifdef EY_PLATFORM_WINDOWS
	#ifdef EY_BUILD_DLL
		#define ENYARI_API __declspec(dllexport)
	#else
		#define ENYARI_API __declspec(dllimport)
	#endif
#endif // 0
