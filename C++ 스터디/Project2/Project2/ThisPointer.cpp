#include <iostream>
using namespace std;

/*class MyClass {
public:
	int a;
};

int main() {
	MyClass hi;
	hi.a = 5;

	MyClass*p = new MyClass();

	p->a = 10;
}*///이건 다른거, 디스포인터 아님

class MyClass {
public:
	int val;
	//1번
	MyClass(int val) {
		this->val = val;
	}

	MyClass() {

	}
	//2번
	MyClass* myAddress() {
		return this;
	}
};

//this = 가독성 좋음, 포인터, ->연산자로 접근
//this가 쓰이는 경우
//1. 매개변수랑 멤버 변수랑 이름이 같을때
//2. 자기 자신 반환할때

int main() {
	//1번
	MyClass hi(5);

	//2번
	MyClass *p = hi.myAddress();
}