#pragma once
#include "Include.h"
class Scene
{
public:
	virtual void Initialize() PURE; // �ʱ�ȭ �ϴ� �뵵��
	virtual void Progress() PURE;	// ���α׷� ������ �뵵��
	virtual void Render() PURE;		// ȭ�� ��� �뵵��
	virtual void Release() PURE;	// �����뵵�� ���
};

