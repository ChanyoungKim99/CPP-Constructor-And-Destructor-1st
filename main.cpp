#include <iostream>

class MyClass
{						// 20번줄에 생성되고, 23번줄에 사라진다.
						// 이건 외부의 일이므로 public으로 해야한다.,
public:
	MyClass()			// 생성자  (void 조차 없다!)
	{
		std::cout << "[Constructor]" << std::endl;
	}

	~MyClass()			// 소멸자  (접두어 ~)
	{
		std::cout << "[Destructor]" << std::endl;
	}
};

int main()
{
	MyClass c1;			// 여기서 클래스 c1이 인스턴스화	 <생성자>

	std::cout << "c1 instantitated!" << std::endl;
}						//  이 때 클래스 c1이 사라짐		 <소멸자>


/*
[Constructor]	
c1 instantitated!
[Destructor]

위 순서로 출력이 된다.

생성자와 소멸자가 자동적으로 호출이 된다!!
*/

/*
이전에 만들었던 클래스 코드에서도 C++ Compiler가 
"암시적"으로 Default Constructor & Default Destructor 를 생성
*/

/*
암시적으로 만들어지는 Default Constructor는
"다른 생성자가 없을 때" 에만 생성이 된다!
*/

/*
자동적으로 만들어진 생성자, 소멸자는  "아무 일도 안한다"

ex)
Student()
{
}
~Student()
{
}
*/