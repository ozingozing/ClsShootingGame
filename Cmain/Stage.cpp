#include "Stage.h"
#include "CollisionManager.h"
#include "ObjectPoolManager.h"
#include "Obj.h"
#include "Bullet.h"
void Stage::Initialize()
{
	
	ObjectPoolManager::Instance()->player->Initialize();

	

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->enemy[i]->Initialize();
	}


	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->bullets[i]->Initialize();
	}

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->Lbullets[i]->Initialize();
	}
	
}

void Stage::Progress()
{
	
	ObjectPoolManager::Instance()->player->Progress();
	

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->enemy[i]->Progress();
	}


	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->bullets[i]->Progress();
	}

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->Lbullets[i]->Progress();
	}


	for (int i = 0; i < 10; i++)
	{
		if (CollisionManager::Instance()->CollisionCheck(ObjectPoolManager::Instance()->player, ObjectPoolManager::Instance()->enemy))
		{
			ObjectPoolManager::Instance()->player->shape = "Ãæµ¹";
		}
		else
		{
			ObjectPoolManager::Instance()->player->shape = "¿Ê";
		}
	}

	
	

	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ObjectPoolManager::Instance()->bullets[j]->act || ObjectPoolManager::Instance()->Lbullets[j])
			{
				if (ObjectPoolManager::Instance()->enemy[i]->x == ObjectPoolManager::Instance()->bullets[j]->x
					&& ObjectPoolManager::Instance()->enemy[i]->y == ObjectPoolManager::Instance()->bullets[j]->y
					|| ObjectPoolManager::Instance()->enemy[i]->x == ObjectPoolManager::Instance()->Lbullets[j]->x
					&& ObjectPoolManager::Instance()->enemy[i]->y == ObjectPoolManager::Instance()->Lbullets[j]->y)

					ObjectPoolManager::Instance()->enemy[i]->act = false;

			}
			
		}

	}
	
	for (int i = 0; i < 10; i++)
	{
		if (!ObjectPoolManager::Instance()->enemy[i]->act)
		{
			ObjectPoolManager::Instance()->enemy[i]->x = rand() % 40;
			ObjectPoolManager::Instance()->enemy[i]->y = rand() % 40;
			ObjectPoolManager::Instance()->enemy[i]->act = true;
		}
	}
	
		
	
	
}

void Stage::Render()
{
	
	

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->enemy[i]->Render();
	}

	ObjectPoolManager::Instance()->player->Render();

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->bullets[i]->Render();
	}

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->Lbullets[i]->Render();
	}
	
	
	
	
}

void Stage::Release()
{
	ObjectPoolManager::Instance()->player->Release();
	delete ObjectPoolManager::Instance()->player;
	ObjectPoolManager::Instance()->player = nullptr;

	

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->enemy[i]->Release();
		delete ObjectPoolManager::Instance()->enemy[i];
		ObjectPoolManager::Instance()->enemy[i] = nullptr;
	}


	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->bullets[i]->Release();
		delete ObjectPoolManager::Instance()->bullets[i];
		ObjectPoolManager::Instance()->bullets[i] = nullptr;
	}

	for (int i = 0; i < 10; i++)
	{
		ObjectPoolManager::Instance()->Lbullets[i]->Release();
		delete ObjectPoolManager::Instance()->Lbullets[i];
		ObjectPoolManager::Instance()->Lbullets[i] = nullptr;
	}
}
