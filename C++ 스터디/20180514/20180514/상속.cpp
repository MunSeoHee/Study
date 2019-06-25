#include <iostream>
using namespace std;

/*class A {
public:
	int val;

	void func() {
		cout << "H" << endl;
	}
};

class B  {

};

class C :public A, public B {

};*/

class A {
public:
	A() {
		cout << "A생성자" << endl;
	}

	~A() {
		cout << "A소멸자" << endl;
	}
};

class B : public A {
public:
	B() {
		cout << "B생성자" << endl;
	}

	~B() {
		cout << "B소멸자" << endl;
	}

};

int main() {
	/*B instance;
	C c;

	c.func();

	c.val = 111;
	instance.val = 5;
	cout << instance.val << endl;*/

	B b;
}

//protect는 상속 받아서 쓸 수 있음, private는 상속 받아서 쓸 수 없음