#include <iostream>
using namespace std;

class MyClass {
public:
	int n;
	static int num;			//��� ��ü���� num�� ����

	static void func();
};

//����ƽ �Լ��� ����ƽ ������ ���� ����
void MyClass:: func() {
	cout << "����ƽ �Լ�" << endl;
	//n=5 �ȵ�
	num = 5;
}

int MyClass::num = 0;			//static ������ ���������� ��������ߵ�


int main() {
	MyClass a;
	MyClass* b;
	b = new MyClass();
	a.num = 5;			//����1
	cout << MyClass::num << endl;			//����2
	b->num = 123;			//����3
}