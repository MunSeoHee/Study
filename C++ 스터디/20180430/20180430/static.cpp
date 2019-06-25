#include <iostream>
using namespace std;

class MyClass {
public:
	int n;
	static int num;			//모든 객체들이 num을 공유

	static void func();
};

//스태틱 함수는 스태틱 변수만 접근 가능
void MyClass:: func() {
	cout << "스태틱 함수" << endl;
	//n=5 안됨
	num = 5;
}

int MyClass::num = 0;			//static 변수는 전역변수로 선언해줘야됨


int main() {
	MyClass a;
	MyClass* b;
	b = new MyClass();
	a.num = 5;			//사용법1
	cout << MyClass::num << endl;			//사용법2
	b->num = 123;			//사용법3
}