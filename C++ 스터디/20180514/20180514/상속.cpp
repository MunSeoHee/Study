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
		cout << "A������" << endl;
	}

	~A() {
		cout << "A�Ҹ���" << endl;
	}
};

class B : public A {
public:
	B() {
		cout << "B������" << endl;
	}

	~B() {
		cout << "B�Ҹ���" << endl;
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

//protect�� ��� �޾Ƽ� �� �� ����, private�� ��� �޾Ƽ� �� �� ����