#include <iostream>
using namespace std;

class Edge {
public:
	int v1, v2, dis;

	bool operator<(Edge other) {
		return dis < other.dis;
	}

	bool operator==(Edge other) {
		return v1 == other.v1 && v2 == other.v2 && dis = other.dis;
	}
};

int main() {
	Edge a, b;
	a.dis = 1;
	b.dis = 2;
	cout << (a < b) << endl;
}

//연산자 우선순위는 못바꿈