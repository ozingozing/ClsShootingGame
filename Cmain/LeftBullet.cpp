#include "LeftBullet.h"
#include "ObjectPoolManager.h"
void LeftBullet::Initialize()
{


	act = false;
	x = 0;
	y = 0;
	shape = "@";

}

void LeftBullet::Progress()
{


	if (act )
	{
		x--;

		if (x < 0)
		{
			act = false;
		}
	}







}

void LeftBullet::Render()
{

	
	ConsoleManager::Instance()->SetPosition(x, y);
	cout << shape << endl;




}

void LeftBullet::Release()
{
}
