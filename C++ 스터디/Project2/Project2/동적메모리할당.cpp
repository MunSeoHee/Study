#include <iostream>
using namespace std;

int main() {
	//c����

	int *arr = NULL;
	int size = 100;

	arr = (int*)malloc(sizeof(int)*size);//�Ҵ�
	free(arr);//�ݳ�


	//c++����
	arr = new int[size];//�Ҵ�
	delete[] arr;//�ݳ�
	//�Լ��� �ƴ϶� ������(+, -, *, / ó��)

	int *p = new int; //�ϳ��� �Ҵ�
	delete p; //�ݳ�
	
	//for - each�� /java������ ����
	int ar[] = { 1,2,3 };

	for (int val : ar) {
		cout << val << endl;
	}
}