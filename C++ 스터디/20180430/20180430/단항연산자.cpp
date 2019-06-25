#include <iostream> 
using namespace std;

class MyNum {
public:
	void operator++();
	void operator++(int x);
};
void MyNum:: operator++() {
	cout << "전위" << endl;		//매개변수X
}
void MyNum:: operator++(int x) {
	cout << "후위" << endl;			//매개변수O
}


int main() {
	//단항 연산자
	int a;
	++a;//전위
	a++;//후위

}