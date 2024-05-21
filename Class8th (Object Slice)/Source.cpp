#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"

void Beacon(Terran* terran)		// 객체 잘림을 해결하도록 포인터를 넣는다.
{
	terran->Recovery();
}


int main()
{
#pragma region 객체 잘림
	// 크기가 작은 상위 클래스에 상위 클래스보다
	// 더 큰 하위 클래스를 대입하여 넣을 경우 클래스의 내용이
	// 잘리는 현상입니다.

	// Marine marine;
	// 
	// marine.Damage(10);
	// 
	// Firebet firebet;
	// 
	// firebet.Damage(15);
	// 
	// Ghost ghost;
	// 
	// ghost.Damage(26);
	// 
	// Beacon(&marine);
	// Beacon(&firebet);			// 자식을 참조하도록 레퍼런스 해준다.
	// Beacon(&ghost);
#pragma endregion




	return 0;
}

