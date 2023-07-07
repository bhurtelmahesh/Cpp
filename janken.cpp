#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

const int ROCK = 0;
const int PAPER = 1;
const int SCISSORS = 2;

int getPlayerHand() {
    int choice;

    std::cout << "じゃんけんをします。手を選んでください。\n\n";
    std::cout << "1. グー\n";
    std::cout << "2. パー\n";
    std::cout << "3. チョキ\n\n";
    std::cout << "選択肢を入力してください: ";
    std::cin >> choice;

    if (choice >= 1 && choice <= 3) {
        return choice - 1;
    } else {
        std::cout << "無効な選択肢です。再度選んでください。\n";
        return getPlayerHand();
    }
}

int getComputerHand() {
    std::srand(static_cast<unsigned>(std::time(0)));
    return std::rand() % 3;
}

void playGame(const std::string& playerName) {
    int playerHand = getPlayerHand();
    int computerHand = getComputerHand();

    std::cout << playerName << "さんの手: ";
    switch (playerHand) {
        case ROCK:
            std::cout << "グー\n";
            break;
        case PAPER:
            std::cout << "パー\n";
            break;
        case SCISSORS:
            std::cout << "チョキ\n";
            break;
    }

    std::cout << "コンピュータの手: ";
    switch (computerHand) {
        case ROCK:
            std::cout << "グー\n";
            break;
        case PAPER:
            std::cout << "パー\n";
            break;
        case SCISSORS:
            std::cout << "チョキ\n";
            break;
    }

    if (playerHand == computerHand) {
        std::cout << "＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n";
        std::cout << "引き分けです。\n";
        std::cout << "＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n";

    } else if (
        (playerHand == ROCK && computerHand == SCISSORS) ||
        (playerHand == PAPER && computerHand == ROCK) ||
        (playerHand == SCISSORS && computerHand == PAPER)
    ) {
        std::cout << "＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n";
        std::cout << "おめでとう！！！\n";
        std::cout << playerName << "さんの勝利です！\n";
        std::cout << "＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n";

    } else {
        std::cout << "＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n";
        std::cout << "残念！\n";
        std::cout << "コンピュータの勝利です。\n";
        std::cout << "＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n";
    }
}

int main() {
    std::string playerName;

    std::cout << "\n＊＊＊＊＊＊＊　じゃんけん　＊＊＊＊＊＊＊＊\n\n";

    std::cout << "名前を入力してください： ";
    std::cin >> playerName;

    playGame(playerName);

    return 0;
}
