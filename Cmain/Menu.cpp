#include "Menu.h"
#include "SceneManager.h"
void Menu::Initialize()
{
}

void Menu::Progress()
{
	if (GetAsyncKeyState(VK_RETURN))
	{
		SceneManager::Instance()->SetScene(2);
	}
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{
}