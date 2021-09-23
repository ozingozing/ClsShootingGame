#include "Bullet.h"
#include "ObjectPoolManager.h"
void Bullet::Initialize()
{
	
	
		act = false;
		x = 0;
		y = 0;
		shape = "@";
	
		


}

void Bullet::Progress()
{
	

		if (act)
		{
			x++;

			if (x > 40)
			{
				act = false;
			}
		}
		
		
		
		
	
	

}

void Bullet::Render()
{
	
	
	ConsoleManager::Instance()->SetPosition(x, y);
	cout << shape << endl;
	
	
	
	
}

void Bullet::Release()
{
}
