#include <iostream> 
using namespace std;

class MyNum {
public:
	void operator++();
	void operator++(int x);
};
void MyNum:: operator++() {
	cout << "����" << endl;		//�Ű�����X
}
void MyNum:: operator++(int x) {
	cout << "����" << endl;			//�Ű�����O
}


int main() {
	//���� ������
	int a;
	++a;//����
	a++;//����

}