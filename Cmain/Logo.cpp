#include "Logo.h"
#include "SceneManager.h"
#include "ConsoleManager.h"
#include "DoubleBuffer.h"
void Logo::Initialize()
{
	 

	logoImage[0] = "¡á¡á¡á¡á¡á¡á¡á¡á         ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[1] = "¡á¡á¡á  ¡á¡á¡á             ¡á¡á¡á  ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[2] = "¡á¡á        ¡á              ¡á¡á     ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[3] = "¡á¡á       ¡á¡á              ¡á      ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[4] = "¡á¡á¡á       ¡á¡á            ¡á      ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[5] = "¡á¡á¡á       ¡á¡á¡á         ¡á      ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[6] = "¡á¡á¡á¡á     ¡á¡á¡á¡á       ¡á¡á       ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[7] = "¡á¡á¡á        ¡á¡á¡á          ¡á           ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[8] = "¡á¡á¡á      ¡á¡á¡á¡á¡á¡á¡á ¡á¡á¡á¡á¡á¡á  ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";
	logoImage[9] = "¡á¡á¡á  ¡á  ¡á¡á¡á      ¡á     ¡á¡á           ¡á  ¡á¡á     ¡á¡á¡á";
	logoImage[10] = "  ¡á¡á      ¡á¡á¡á  ¡á  ¡á  ¡á¡á¡á¡á¡á     ¡á¡á¡á  ¡á  ¡á¡á  ¡á¡á";
	logoImage[11] = " ¡á           ¡á¡á      ¡á     ¡á¡á¡á¡á  ¡á¡á¡á¡á¡á  ¡á¡á¡á¡á  ¡á";
	logoImage[12] = " ¡á¡á¡á   ¡á¡á¡á¡á¡á¡á¡á¡á ¡á¡á¡á¡á           ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";

	
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
