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

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
