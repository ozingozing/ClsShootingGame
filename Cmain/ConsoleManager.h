#pragma once
#include "Include.h"
class ConsoleManager
{
private:
	static ConsoleManager* instance;
public:
	static ConsoleManager* Instance()
	{
		if (instance == nullptr)
		{
			instance = new ConsoleManager();
		}
		
		return instance;
	}
public:
	void SetPosition(int x, int y);
	void SetColor(int color);
	void RemoveCursor();
};

