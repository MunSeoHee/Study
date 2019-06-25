#include <iostream>
using namespace std;

int main() {
	// 포인터 : 주소값을 저장하는 변수
	// 일반 변수 : 값을 저장하는 변수

	int arr[] = { 1, 2, 3 };

	int *p = arr;
	// 배열도 포인터
	*p = 0;
	*(p + 2) = 5;

	for (int i = 0; i < 3; i++) {
		cout << *(p + i) << endl;
		//cout << arr[i] << endl;
	}
}