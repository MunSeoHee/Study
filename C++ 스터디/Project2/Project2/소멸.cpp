#include<iostream>
using namespace std;

class MyClass { 
	int *arr;

public:
	MyClass(int size) {
		cout << "�����޸��Ҵ�" << endl;
		arr = (int*)malloc(sizeof(int)*size); 
	}
	~MyClass() { //~�� �Ҹ���, ��ü�� ������� �����
		cout << "�Ҹ��� ����" << endl;
		free(arr); //�ڿ� �ݳ�
	}
};

//������vs�Ҹ��� => ������ ����, 
//�����ڴ� �Լ� �ߺ� ����, �Ҹ���(�Լ� �ߺ� �Ұ�, ���ϰ� ����, ��ü���� �ѹ��ۿ� ���� �ȵ�) 
//������=�ʱⰪ�ٶ� ���, �Ҹ��� = �ڿ��ݳ��Ҷ� ���

int main() {
	MyClass *p;

	p = new MyClass(10);

	cout << "==========" << endl;
	delete p;
}