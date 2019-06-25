#include <iostream>
using namespace std;

class Person;
class PersonManager;

class Manager {
	void func(Person p1) {
		cout << "sdfdsfsd" << endl;
		cout << p1.height << endl;
	}
};

class PersonManager {
public:
	void func(Person p1, Person p2);
};

void PersonManager::func (Person p1, Person p2) {
	cout << "¾È³ç" << endl;
}

class Person {
	int height;
public:
	Person(int height) {
		this->height = height;
	}

	friend int getHeight(Person p1);
	friend void PersonManager::func(Person p1, Person p2);
	friend Manager;
};

int getHeight(Person p1) {
	return p1.height;
}



int main() {
	Person a(170);
	Person b(177);

	PersonManager m;

	m.func(a, b);
	cout << getHeight(a) << endl;

	return 0;
}