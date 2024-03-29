#include "Logo.h"
#include "SceneManager.h"
#include "ConsoleManager.h"
#include "DoubleBuffer.h"
void Logo::Initialize()
{
	 

	logoImage[0] = "กแกแกแกแกแกแกแกแ         กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[1] = "กแกแกแ  กแกแกแ             กแกแกแ  กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[2] = "กแกแ        กแ              กแกแ     กแกแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[3] = "กแกแ       กแกแ              กแ      กแกแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[4] = "กแกแกแ       กแกแ            กแ      กแกแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[5] = "กแกแกแ       กแกแกแ         กแ      กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[6] = "กแกแกแกแ     กแกแกแกแ       กแกแ       กแกแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[7] = "กแกแกแ        กแกแกแ          กแ           กแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[8] = "กแกแกแ      กแกแกแกแกแกแกแ กแกแกแกแกแกแ  กแกแกแกแกแกแกแกแกแกแกแกแ";
	logoImage[9] = "กแกแกแ  กแ  กแกแกแ      กแ     กแกแ           กแ  กแกแ     กแกแกแ";
	logoImage[10] = "  กแกแ      กแกแกแ  กแ  กแ  กแกแกแกแกแ     กแกแกแ  กแ  กแกแ  กแกแ";
	logoImage[11] = " กแ           กแกแ      กแ     กแกแกแกแ  กแกแกแกแกแ  กแกแกแกแ  กแ";
	logoImage[12] = " กแกแกแ   กแกแกแกแกแกแกแกแ กแกแกแกแ           กแกแกแกแกแกแกแกแกแกแ";

	
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
