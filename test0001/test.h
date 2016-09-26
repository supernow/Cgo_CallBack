#pragma once
#ifdef ADAPTERDLL_EXPORTS
#define ADAPTERDLL_API __declspec(dllexport)
#else
#define ADAPTERDLL_API __declspec(dllimport)
#endif

extern "C" {
	typedef int int32_t;
	typedef unsigned int uint32_t;
	typedef unsigned char uint8_t;

	typedef int32_t(*cbStr)(int32_t callId, int32_t funtype, char* str);
	cbStr goCallback;
	ADAPTERDLL_API void init(cbStr* p);
}