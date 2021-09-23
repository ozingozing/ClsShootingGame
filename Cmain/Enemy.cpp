#include "Enemy.h"

void Enemy::Initialize()
{
	act = true;
	x = rand() % 30;
	y = rand() % 30;
	shape = "º¿";

	
}

void Enemy::Progress()
{
	
		
	
	
	
}

void Enemy::Render()
{
	
	if (act == true)
	{
		ConsoleManager::Instance()->SetPosition(x, y);
		cout << shape;
	}
	
		
	
	
	
	
	
}

void Enemy::Release()
{
	
}
