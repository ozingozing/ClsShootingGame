#include "Logo.h"
#include "SceneManager.h"
#include "ConsoleManager.h"
#include "DoubleBuffer.h"
void Logo::Initialize()
{
	 

	logoImage[0] = "���������         ���������������������";
	logoImage[1] = "����  ����             ����  ����������������";
	logoImage[2] = "���        ��              ���     ���������������";
	logoImage[3] = "���       ���              ��      ���������������";
	logoImage[4] = "����       ���            ��      ���������������";
	logoImage[5] = "����       ����         ��      ����������������";
	logoImage[6] = "�����     �����       ���       ��������������";
	logoImage[7] = "����        ����          ��           ������������";
	logoImage[8] = "����      �������� �������  �������������";
	logoImage[9] = "����  ��  ����      ��     ���           ��  ���     ����";
	logoImage[10] = "  ���      ����  ��  ��  ������     ����  ��  ���  ���";
	logoImage[11] = " ��           ���      ��     �����  ������  �����  ��";
	logoImage[12] = " ����   ��������� �����           �����������";

	
}

void Logo::Progress()
{
	if (GetAsyncKeyState(VK_RETURN))
	{
		SceneManager::Instance()->SetScene(1);
	}
}

void Logo::Render()
{
	ConsoleManager::Instance()->SetColor(YELLOW);
	for (int i = 0; i < 13; i++)
	{
		ConsoleManager::Instance()->SetPosition(10, 10 + i);
		cout << logoImage[i];
	}

	

}

void Logo::Release()
{
}
