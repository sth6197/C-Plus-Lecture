#pragma once
#include <iostream>

using namespace std;

class Terran
{
protected:
	int health;
	int maxHP;

public:
	Terran();

	virtual void Recovery();
	virtual void Damage(int damage);
};