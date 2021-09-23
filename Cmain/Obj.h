#pragma once
#include "ConsoleManager.h"

class Obj
{
public:
	bool act;
	int x;
	int y;
	const char* shape;
	bool LeftKeyAct;
	bool RightKeyAct;
public:
	virtual void Initialize() PURE;
	virtual void Progress() PURE;
	virtual void Render() PURE;
	virtual void Release() PURE;
};

