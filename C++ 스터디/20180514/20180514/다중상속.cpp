#include <iostream>
using namespace std;

class Game {
public:
	string game;

	Game() {
		game = "����";
	}
};

class Omok :virtual public Game {			//virtual = �ϳ��� ���⵵�� (������)
public:
	Omok() {
		game = "����";
	}
};

class badook :virtual public Game {
public:
	badook() {
		game = "�ٵ�";
	}
};

class NewGame : public Omok, public badook {
	NewGame() {
		//game = "���ο� ����";	//�ٵ��� ����, ������ ����, ������ 2���� �ް� �� (virtual������)
		game = "���ο� ����";	
	}
};

//���� ���