#include <iostream>
using namespace std;

class MyClass {
public:
	int val;

	/*MyClass operator+(MyClass other) {
		MyClass result;

		result.val = val + other.val;
		return result;
	}*/

	friend MyClass operator+(MyClass a, MyClass b);
	friend MyClass operator+(int a, MyClass b);

	MyClass operator+(int val) {
		MyClass result;

		result.val = this->val + val;
		return result;
	}
};

MyClass operator+ (MyClass a, MyClass b) {
	MyClass result;

	result.val = a.val + b.val;
	return result;
}

MyClass operator+ (int a, MyClass b) {
	MyClass result;

	result.val = a + b.val;
	return result;
}

int main() {
	MyClass a;
	MyClass b;

	a.val = 1;
	b.val = 2;

	MyClass result = a + b;
	cout << result.val << endl;

	a.val = 1;
	MyClass b = a + 10;
	MyClass c = 10 + a;			//연산자 오버라이딩을 프렌드로 해야되는 경우
}