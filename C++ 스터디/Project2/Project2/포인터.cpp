#include <iostream>
using namespace std;

int main() {
	// ������ : �ּҰ��� �����ϴ� ����
	// �Ϲ� ���� : ���� �����ϴ� ����

	int arr[] = { 1, 2, 3 };

	int *p = arr;
	// �迭�� ������
	*p = 0;
	*(p + 2) = 5;

	for (int i = 0; i < 3; i++) {
		cout << *(p + i) << endl;
		//cout << arr[i] << endl;
	}
}