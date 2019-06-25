#include <iostream>
using namespace std;

int main() {
	//c에서

	int *arr = NULL;
	int size = 100;

	arr = (int*)malloc(sizeof(int)*size);//할당
	free(arr);//반납


	//c++에서
	arr = new int[size];//할당
	delete[] arr;//반납
	//함수가 아니라 연산자(+, -, *, / 처럼)

	int *p = new int; //하나만 할당
	delete p; //반납
	
	//for - each문 /java에서도 나옴
	int ar[] = { 1,2,3 };

	for (int val : ar) {
		cout << val << endl;
	}
}