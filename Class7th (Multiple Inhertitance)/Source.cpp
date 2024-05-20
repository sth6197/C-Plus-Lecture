#include <iostream>
#include "Computer.h"

using namespace std;

class Food
{
public:
    Food()
    {
        cout << "Create Food" << endl;
    }
};

class Meat : virtual public Food
{
public:
    Meat()
    {
        cout << "Create Meat" << endl;
    }
};

class Vegetable : virtual public Food
{
public:
    Vegetable()
    {
        cout << "Create Vegetable" << endl;
    }
};

class Hamburger : public Meat, public Vegetable
{
public:
    Hamburger()
    {
        cout << "Create Hamburger" << endl;
    }

};


int main()
{
#pragma region 다중 상속
    // 하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것입니다.

    // Computer computer;

    // computer.Use();


    // 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이 존재할 수 있기 때문에
    // 범위 지정 연산자를 통해 상위 클래스의 이름을 선언하고 속성을 사용해야 합니다.
#pragma endregion

#pragma region 가상 상속
    // 다이아몬드 상속이 일어나는 것을 해결하기 위한 상속 방법
    // 조부모에게 상속받고 있는 부모 클래스에 virtual을 기입한다.

    // Hamburger hamburger;

    


#pragma endregion


}

