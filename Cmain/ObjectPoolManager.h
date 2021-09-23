#pragma once
#include "Obj.h"
#include "Bullet.h"
#include "Player.h"
#include "Enemy.h"
#include "LeftBullet.h"
class ObjectPoolManager
{
private:
	static ObjectPoolManager* instance;

public:
	static ObjectPoolManager* Instance()
	{
		if (instance == nullptr)
		{
			instance = new ObjectPoolManager;
		}

		return instance;
	}

public:
	Obj* bullets[10];
	Obj* Lbullets[10];
	Obj* enemy[10];
	Obj* player = new Player;
public:
	ObjectPoolManager()
	{
		for (int i = 0; i < 10; i++)
		{
			bullets[i] = new Bullet;
		}

		for (int i = 0; i < 10; i++)
		{
			enemy[i] = new Enemy;
		}

		for (int i = 0; i < 10; i++)
		{
			Lbullets[i] = new LeftBullet;
		}
	}
	
	
public:
	
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
};

