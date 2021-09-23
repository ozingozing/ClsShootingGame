#include "SceneManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::instance = nullptr;

void SceneManager::SetScene(int index)
{
	if (currentScene != nullptr)
	{
		delete currentScene;
		currentScene = nullptr;
	}
	
	switch (index)
	{
	case 0:
		currentScene = new Logo();
		break;
	case 1:
		currentScene = new Menu();
		break;
	case 2:
		currentScene = new Stage();
		break;
	default:
		break;
	}

	currentScene->Initialize();
}

void SceneManager::Progress()
{
	currentScene->Progress();
}

void SceneManager::Render()
{
	currentScene->Render();
}

void SceneManager::Relase()
{
	currentScene->Release();
}