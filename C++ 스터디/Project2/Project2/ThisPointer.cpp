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
}*///�̰� �ٸ���, �������� �ƴ�

class MyClass {
public:
	int val;
	//1��
	MyClass(int val) {
		this->val = val;
	}

	MyClass() {

	}
	//2��
	MyClass* myAddress() {
		return this;
	}
};

//this = ������ ����, ������, ->�����ڷ� ����
//this�� ���̴� ���
//1. �Ű������� ��� ������ �̸��� ������
//2. �ڱ� �ڽ� ��ȯ�Ҷ�

int main() {
	//1��
	MyClass hi(5);

	//2��
	MyClass *p = hi.myAddress();
}