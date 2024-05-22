#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2 & operator + (const Vector2 & clone)	// operator 함수
	{
		Vector2 object(x + clone.x, y + clone.y);	// 임시 객체 생성 후 반환, 초기화
		return object;
	}

	Vector2 &operator --()	// 전위 증감 연산자 오버로딩
	{
		this->x -= 1;
		this->y -= 1;
		return *this;
	}

	Vector2 &operator --(int) // 후위 증감 연산자 오버로딩
	{
		Vector2 clone(x, y);
		this->x -= 1;
		this->y -= 1;
		return clone;
	}

	Vector2 operator * (int value) // 교환 법칙
	{
		return Vector2(this->x * value, this->y * value);
	}

	int &X()
	{
		return x;
	}

	int &Y()
	{
		return y;
	}
};

Vector2 operator * (int value, Vector2 & clone)	// 전역함수 교환 법칙
{
	return value * clone;
}


int main()
{
#pragma region 연산자 오버로딩

	// Vector2 vector1(10, 10);
	// Vector2 vector2(5, 5);
	// 
	// Vector2 vector3 = vector1 + vector2;
	// 
	// cout << "vector3의 값 : " << vector3.Y() << endl;
	// cout << "vector3의 값 : " << vector3.X() << endl;
 
	// Vector2 vector4(10, 10);
	// --vector4;
	// 
	// cout << "vector4의 X 값 : " << vector4.X() << endl;
	// cout << "vector4의 Y 값 : " << vector4.Y() << endl;
	// 
	// Vector2 vector5 = vector4--;
	// 
	// cout << "vector5의 X 값 : " << vector5.X() << endl;
	// cout << "vector5의 Y 값 : " << vector5.Y() << endl;
	// 
	// cout << "vector4의 X 값 : " << vector4.X() << endl;
	// cout << "vector4의 Y 값 : " << vector4.Y() << endl;

#pragma endregion

#pragma region 연산자 오버로딩의 교환 법칙
	// 피연산자의 위치는 연산의 결과에 아무런 영향을 미치지 않는 법칙입니다.

	Vector2 position1(2, 5);

	Vector2 position2 = position1 * 2;
	
	cout << "position2의 X 값 : " << position2.X() << endl;
	cout << "position2의 Y 값 : " << position2.Y() << endl;


#pragma endregion



	return 0;
}