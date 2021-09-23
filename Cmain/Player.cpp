#include "Player.h"
#include "ObjectPoolManager.h"

void Player::Initialize()
{
	act = true;
	x = 10;
	y = 10;
	shape = "¿Ê";
	LeftKeyAct = false;
	RightKeyAct = false;
}

void Player::Progress()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		x--;
		LeftKeyAct = true;
		RightKeyAct = false;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		x++;
		LeftKeyAct = false;
		RightKeyAct = true;
	}

	if (GetAsyncKeyState(VK_UP))
	{
		y--;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		y++;
	}

	if (!(LeftKeyAct) && RightKeyAct == true)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{


			for (int i = 0; i < 10; i++)
			{
				if (!ObjectPoolManager::Instance()->bullets[i]->act)
				{
					ObjectPoolManager::Instance()->bullets[i]->x = x;
					ObjectPoolManager::Instance()->bullets[i]->y = y;
					ObjectPoolManager::Instance()->bullets[i]->act = true;
					break;
				}

			}
		}
	}




	if (LeftKeyAct == true && !(RightKeyAct))
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			for (int i = 0; i < 10; i++)
			{
				if (!ObjectPoolManager::Instance()->Lbullets[i]->act)
				{
					ObjectPoolManager::Instance()->Lbullets[i]->x = x;
					ObjectPoolManager::Instance()->Lbullets[i]->y = y;
					ObjectPoolManager::Instance()->Lbullets[i]->act = true;
					break;
				}
			}
		}
	}



}
	
	


void Player::Render()
{
	
		ConsoleManager::Instance()->SetPosition(x, y);
		cout << shape;
	
	
}

void Player::Release()
{
}
