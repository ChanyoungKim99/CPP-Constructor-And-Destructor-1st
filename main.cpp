#include <iostream>

class MyClass
{						// 20���ٿ� �����ǰ�, 23���ٿ� �������.
						// �̰� �ܺ��� ���̹Ƿ� public���� �ؾ��Ѵ�.,
public:
	MyClass()			// ������  (void ���� ����!)
	{
		std::cout << "[Constructor]" << std::endl;
	}

	~MyClass()			// �Ҹ���  (���ξ� ~)
	{
		std::cout << "[Destructor]" << std::endl;
	}
};

int main()
{
	MyClass c1;			// ���⼭ Ŭ���� c1�� �ν��Ͻ�ȭ	 <������>

	std::cout << "c1 instantitated!" << std::endl;
}						//  �� �� Ŭ���� c1�� �����		 <�Ҹ���>


/*
[Constructor]	
c1 instantitated!
[Destructor]

�� ������ ����� �ȴ�.

�����ڿ� �Ҹ��ڰ� �ڵ������� ȣ���� �ȴ�!!
*/

/*
������ ������� Ŭ���� �ڵ忡���� C++ Compiler�� 
"�Ͻ���"���� Default Constructor & Default Destructor �� ����
*/

/*
�Ͻ������� ��������� Default Constructor��
"�ٸ� �����ڰ� ���� ��" ���� ������ �ȴ�!
*/

/*
�ڵ������� ������� ������, �Ҹ��ڴ�  "�ƹ� �ϵ� ���Ѵ�"

ex)
Student()
{
}
~Student()
{
}
*/