#include <iostream>
using namespace std;

class Player {
private:
    string name;
    int health;
    int score;

public:
    Player(string playerName, int playerHealth, int playerScore) {
        name = playerName;
        health = playerHealth;
        score = playerScore;
    }

    string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    int getScore() const {
        return score;
    }

    void setName(string playerName) {
        name = playerName;
    }

    void setHealth(int playerHealth) {
        health = playerHealth;
    }

    void setScore(int playerScore) {
        score = playerScore;
    }
};

int main() {
    string playerName;
    int playerHealth, playerScore;

    // プレイヤー情報の入力
    cout << "プレイヤー名を入力してください: ";
    getline(cin, playerName);

    cout << "体力を入力してください: ";
    cin >> playerHealth;

    cout << "スコアを入力してください: ";
    cin >> playerScore;

    // 入力された情報でプレイヤーオブジェクトを作成
    Player player(playerName, playerHealth, playerScore);

    // ゲームのタイトル表示
    cout << "*************************" << endl;
    cout << "  ゲーム「冒険の旅」" << endl;
    cout << "*************************" << endl;

    // プレイヤー情報表示
    cout << "プレイヤー名: " << player.getName() << endl;
    cout << "体力: " << player.getHealth() << endl;
    cout << "スコア: " << player.getScore() << endl;

    // ゲームプレイ中...
    cout << "\n冒険の旅が始まります..." << endl;

    // プレイヤー情報の更新
    player.setName("次郎");
    player.setHealth(75);
    player.setScore(50);

    // 更新されたプレイヤー情報表示
    cout << "\n旅の途中でプレイヤー情報が変化しました:" << endl;
    cout << "新しいプレイヤー名: " << player.getName() << endl;
    cout << "新しい体力: " << player.getHealth() << endl;
    cout << "新しいスコア: " << player.getScore() << endl;

    // ゲーム終了メッセージ
    cout << "\n冒険の旅が終わりました。お疲れ様でした！" << endl;

    return 0;
}
