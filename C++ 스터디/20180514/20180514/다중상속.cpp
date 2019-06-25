#include <iostream>
using namespace std;

class Game {
public:
	string game;

	Game() {
		game = "게임";
	}
};

class Omok :virtual public Game {			//virtual = 하나만 생기도록 (가상상속)
public:
	Omok() {
		game = "오목";
	}
};

class badook :virtual public Game {
public:
	badook() {
		game = "바둑";
	}
};

class NewGame : public Omok, public badook {
	NewGame() {
		//game = "새로운 게임";	//바둑의 게임, 오목의 게임, 게임을 2개를 받게 됨 (virtual없을때)
		game = "새로운 게임";	
	}
};

//가상 상속