#include <iostream>

class Player {
public:
	std::string Name;
	int HP;
	Player() :Player("Default", 100) {}
	Player(std::string name, int hp) :Name(name), HP(hp) {}
};


class GameManager {
private:
	GameManager() {}

public:
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

	static GameManager& Instance() {
		static GameManager instance;
		return instance;
	}
	void StartGame() {
		GameManager::Instance().StartGame();
	}
};
enum class EnemyState {
	Idle,
	Patrol,
	Chase,
	Attack
};
class Enemy {
	EnemyState currentState;
	void Update() {
		switch (currentState) {
		case EnemyState::Idle:break;
		case EnemyState::Patrol:break;
		case EnemyState::Chase:break;
		case EnemyState::Attack:break;
		}
	}
};
