#pragma once
#include "Animal.h"


class Cat : public Animal
{
public:
	

	int a = 100;
	int b = 100;
	int c = 100;
	int d = 100;
	int e = 100;
	int f = 100;
	int g = 100;

	void Eat()
	{
		cout << "Cat Eat()" << endl;
	}

	Cat();
	~Cat();
	
};

