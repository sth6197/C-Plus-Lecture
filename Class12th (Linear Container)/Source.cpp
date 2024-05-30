#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <list>
#include <deque>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

using namespace std;

void View(int life)				// 체력 함수
{
	for (int i = 0; i < life; i++)
	{
		cout << "♥";
	}

	cout << endl << endl;
}

void Judgment(vector<const char*>& note, const char* arrow, int& life)
{
	if (note.back() == arrow)	// 노트 판정 함수
	{
		note.pop_back();
	}
	else
	{
		life--;
	}
}

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인
	// 컨테이너 입니다.
	// 배열의 데이터값을 자주 삽입, 변경하면 메모리 파편화가 일어날 수 있다.
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

	// 데이터 중간에 값을 입력하거나 변경하면 
	// 불필요한 이동, 복사 비용이 발생하는 단점이 있다.
#pragma endregion

#pragma region Rhythm Game
	//	srand((time(NULL)));
	//	char key = 0;
	//	int life = 5;
	//	vector<const char*> note;
	//	note.reserve(6);
	//	
	//	int count = 4;						// 노트 개수
	//	
	//	for (int i = 0; i < count; i++)		// 노트 표시
	//	{
	//		int random = rand() % 4;
	//	
	//		switch (random)
	//		{
	//		case 0: note.push_back("↑");
	//			break;
	//		case 1: note.push_back("←");
	//			break;
	//		case 2: note.push_back("→");
	//			break;
	//		case 3: note.push_back("↓");
	//			break;
	//		}
	//	}
	//	
	//	
	//	while (life > 0)
	//	{
	//		View(life);								// 체력
	//	
	//		for (const char* element : note)		// 게임화면 반복 표시
	//		{
	//			cout << element;
	//		}
	//	
	//		key = _getch();		// 키값 받기
	//		
	//		if (key == -32)
	//		{
	//			key = _getch();
	//		}
	//		switch (key)
	//		{
	//		case UP: Judgment(note, "↑", life);
	//				break;
	//			case LEFT: Judgment(note, "←", life);
	//				break;
	//			case RIGHT: Judgment(note, "→", life);
	//				break;
	//			case DOWN: Judgment(note, "↓", life);
	//				break;
	//		}
	//	
	//		if (note.size() <= 0)
	//		{
	//			break;
	//		}
	//		system("cls");
	//	}
	//	
	//	system("cls");
	//	
	//	if (life <= 0)
	//	{
	//		cout << "패배" << endl;
	//	}
	//	else
	//	{
	//		cout << "승리" << endl;
	//	}

#pragma endregion

#pragma region List

	//	std::list<int> list;
	//	// list 배열에 값 넣기
	//	list.push_back(10);	// [10]
	//	list.push_back(20);	// [10] [20]
	//	
	//	list.push_front(5);	// [5] [10] [20]
	//	list.push_front(1);	// [1] [5] [10] [20]
	//	
	//	list.pop_back();	// [1] [5] [10]
	//	list.pop_front();	// [5] [10]
	//	
	//	cout << "list.front() : " << list.front() << endl;
	//	cout << "list.back() : " << list.back() << endl;

#pragma endregion

#pragma region String

	//	std::string name = "Alistar";	// 문자열 값 초기화
	//	
	//	name.append(" Champion");		// 문자열 추가
	//	
	//	if (name.compare("Alistar"))	// 비교
	//	{
	//		cout << "문자열이 같습니다." << endl;
	//	}
	//	
	//	name.clear();	// 문자열 초기화
	//	
	//	cout << "name 변수의 값 : " << name << endl;

#pragma endregion

#pragma region Deque

	//	std::deque<int> deque;
	//	
	//	deque.push_front(10);	// 데이터값 넣기
	//	deque.push_back(20);
	//	deque.push_back(30);
	//	deque.push_back(40);
	//	
	//	deque.pop_front();		// 맨 앞의 데이터값 삭제
	//	deque.pop_back();		// 맨 뒤의 데이터값 삭제
	//	
	//	for (int i = 0; i < deque.size(); i++)
	//	{
	//		cout << "deque [" << i << "]의 값 : " << deque[i] << endl;
	//	}

#pragma endregion



#pragma endregion


	return 0;
}