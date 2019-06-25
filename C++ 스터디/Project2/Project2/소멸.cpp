#include<iostream>
using namespace std;

class MyClass { 
	int *arr;

public:
	MyClass(int size) {
		cout << "동적메모리할당" << endl;
		arr = (int*)malloc(sizeof(int)*size); 
	}
	~MyClass() { //~은 소멸자, 객체가 사라질때 실행됨
		cout << "소멸자 실행" << endl;
		free(arr); //자원 반납
	}
};

//생성자vs소멸자 => 생성자 먼저, 
//생성자는 함수 중복 가능, 소멸자(함수 중복 불가, 리턴값 없음, 객체마다 한번밖에 실행 안됨) 
//생성자=초기값줄때 사용, 소멸자 = 자원반납할때 사용

int main() {
	MyClass *p;

	p = new MyClass(10);

	cout << "==========" << endl;
	delete p;
}