#include "CollisionManager.h"

CollisionManager* CollisionManager::instance = nullptr;

bool CollisionManager::CollisionCheck(Obj* a, Obj* enemy[])
{
	for (int i = 0; i < 10; i++)
	{
		if (a->x == enemy[i]->x && a->y == enemy[i]->y)
		{
			return true;
		}
	}
	

	return false;
}


