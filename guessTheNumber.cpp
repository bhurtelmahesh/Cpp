#include <iostream>
#include <fstream>
#include <ctime>

// ランダムな数を生成する関数
int generateRandomNumber() {
    std::srand(static_cast<unsigned>(std::time(0)));
    return std::rand() % 100 + 1; // 1から100までの範囲で乱数を生成
}

// プレイヤーの予想を受け取る関数
int getPlayerGuess() {
    int guess;
    std::cout << "1から100までの数を予想してください: ";
    std::cin >> guess;
    return guess;
}

// 結果をファイルに記録する関数
void recordResult(const std::string& playerName, bool win) {
    std::ofstream file("results.txt", std::ios::app); // 追記モードでファイルを開く
    if (file.is_open()) {
        file << playerName << (win ? " won" : " lost") << " the game\n";
        file.close();
    } else {
        std::cout << "ファイルのオープンに失敗しました。\n";
    }
}

int main() {
    int randomNumber = generateRandomNumber();
    int playerGuess;
    int attempts = 0;
    std::string playerName;


    std::cout << "\t＊＊＊＊数当てゲーム＊＊＊＊\n\n";
    std::cout << "数当てゲームを開始します。\n";
    std::cout << "あなたの名前を入力してください: ";
    std::cin >> playerName;

    do {
        playerGuess = getPlayerGuess();
        attempts++;

        if (playerGuess < randomNumber) {
            std::cout << "もっと大きな数です。\n";
        } else if (playerGuess > randomNumber) {
            std::cout << "もっと小さな数です。\n";
        } else {
            std::cout << "**********************\n";
            std::cout << "正解です！\n";

            recordResult(playerName, true);
            break;
        }
    } while (true);

    std::cout << "結果をファイルに記録しました。\n";
    std::cout << "プレイヤー: " << playerName << "\n";
    std::cout << "試行回数: " << attempts << "\n";
            std::cout << "**********************\n";


    return 0;
}
