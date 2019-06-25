#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass() {

	}
	MyClass(int a) {

	}
	int val;
};

int main() {
	MyClass *p;

	p = new MyClass(5);//두번째 MyClass(int a)동적 할당
	p = new MyClass[100];//첫번째로

	//배열로 만들땐 MyClass() (기본)밖에 안됨
}