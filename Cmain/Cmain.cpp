#include "SceneManager.h"
#include "ConsoleManager.h"
#include "CollisionManager.h"
#include "DoubleBuffer.h"
int main()
{
	ConsoleManager::Instance()->RemoveCursor();
	SceneManager::Instance()->SetScene(LOGO);
	while (true)
	{
		system("cls");
		SceneManager::Instance()->Progress();
		SceneManager::Instance()->Render();
		Sleep(50);

	}
	
	SceneManager::Instance()->Relase();
	
	

	return 0;
}