#pragma once

#if defined(_MSC_VER)
	//  Microsoft 
	#if defined(SG_ENGINE)
		#define SG_API __declspec(dllexport)
	#elif defined(SG_CLIENT)
		#define SG_API __declspec(dllimport)
	#else
		#define SG_API
	#endif
#elif defined(__GNUC__)
	//  GCC
	#if defined(SG_ENGINE)
		#define SG_API __attribute__((visibility("default")))
	#else
		#define SG_API
	#endif
#else
	//  Do nothing
	#define SG_API
	#pragma warning Unknown dynamic link 
#endif

