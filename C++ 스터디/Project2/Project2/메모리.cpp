#include <iostream>
using namespace std;

//1. 데이터 : 전역변수, static, const
//2. 스택 : 함수(지역변수들)
//3. 힙 : 동적 할당

//static : 프로그램 실행될때 같이 생김
//const : 정적 변수, 값을 바꾸지 못함

int arr[1000]; //데이터

int main() {
	int a; //스택

	static int b = 10; //데이터
	const int c = 100; //데이터

	int *hi = new int[1000]; //hi : 스택, new int[1000] : 힙
}

//메모리 누수