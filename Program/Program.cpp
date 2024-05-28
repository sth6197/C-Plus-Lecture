#include <iostream>
#include <vector>
#include <ctime>
#include <windows.h>
#include <conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

using namespace std;

int main()
{
#pragma region 기본 템플릿 라이브러리
	
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인
	// 컨테이너 입니다.

#pragma region Vector
	
	//	std::vector<int> vector;
	//	
	//	vector.reserve(6);
	//	
	//	cout << "vector의 capacity 값 : " << vector.capacity() << endl;
	//	
	//	vector.push_back(10);	// [10]
	//	vector.push_back(20);	// [10][20]
	//	vector.push_back(30);	// [10][20][30]
	//	vector.push_back(40);	// [10][20][30][40]
	//	
	//	vector.pop_back();		// [10][20][30] 맨 뒤의 데이터 빼기
	//	
	//	
	//	for (int i = 0; i < vector.size(); i++)
	//	{
	//		cout << "vector[" << i << "]의 값 : " << vector[i] << endl;
	//	}

#pragma endregion

#pragma region Rhythm Game
	srand((time(NULL)));
	int input;
	int life = 3;
	vector<const char*> note;
	note.reserve(6);
	
	int count = 4;

	for (int i = 0; i < count; i++)
	{
		int random = rand() % 4;

		switch (random)
		{
		case 0: note.push_back("↑");
			break;
		case 1: note.push_back("←");
			break;
		case 2: note.push_back("→");
			break;
		case 3: note.push_back("↓");
			break;
		}
	}

	for (const char* element : note)
	{
		cout << element;
	}


#pragma endregion


#pragma endregion



#pragma endregion


	return 0;
}