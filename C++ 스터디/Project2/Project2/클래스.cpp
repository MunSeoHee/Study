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

	p = new MyClass(5);//�ι�° MyClass(int a)���� �Ҵ�
	p = new MyClass[100];//ù��°��

	//�迭�� ���鶩 MyClass() (�⺻)�ۿ� �ȵ�
}