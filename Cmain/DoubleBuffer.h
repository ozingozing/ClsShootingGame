#pragma once
#include "Include.h"
class DoubleBuffer
{
private:
	static DoubleBuffer* instance;
public:
	static DoubleBuffer* Instance()
	{
		if (instance == nullptr)
		{
			instance = new DoubleBuffer;
		}
		return instance;
	}
private:
	HANDLE hBuffer[2];
	int screenIndex;
public:
	void InitBuffer();
	void FlipBuffer();
	void ClearBuffer();
	void WriteBuffer(int x, int y, const char* shape, int color);
	void DestroyBuffer();

};

