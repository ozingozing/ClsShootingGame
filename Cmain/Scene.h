#pragma once
#include "Include.h"
class Scene
{
public:
	virtual void Initialize() PURE; // 초기화 하는 용도로
	virtual void Progress() PURE;	// 프로그램 진행할 용도로
	virtual void Render() PURE;		// 화면 출력 용도로
	virtual void Release() PURE;	// 해제용도로 사용
};

