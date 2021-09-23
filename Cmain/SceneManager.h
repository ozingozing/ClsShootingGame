#pragma once
#include "Scene.h"
class SceneManager
{
private:
	static SceneManager* instance;
public:
	static SceneManager* Instance()
	{
		if (instance == nullptr)
		{
			instance = new SceneManager;
		}
		return instance;
	}
private:
	Scene* currentScene;
public:
	void SetScene(int index);
	void Progress();
	void Render();
	void Relase();
private:
	SceneManager()
	{
		currentScene = nullptr;
	}
};

