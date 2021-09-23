#pragma once
#include "Scene.h"
#include "Player.h"
#include "Enemy.h"
#include "ObjectPoolManager.h"
#include "Bullet.h"
#include "LeftBullet.h"

class Stage : public Scene
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
};

