// RanderAPI.h

#ifndef __RANDERAPI_H__
#define __RANDERAPI_H__

#include "Init.h"

class TestClass
{
public:
	TestClass();
	void f();
};


class RenderAPI
{
public:
	RenderAPI() = delete;
	~RenderAPI() = delete;


	static void Clear();
	static void Render();
	static void Display();
	static void setPixelColor(int x, int y, int z);
};




#endif //__RANDERAPI_H__
