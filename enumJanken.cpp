#include <iostream>
#include <cstdlib>
#include <ctime>

enum Choice { ROCK, PAPER, SCISSORS };

std::string choiceToString(int choice) {
  switch (choice) {
    case ROCK:
      return "グー";
    case PAPER:
      return "パー";
    case SCISSORS:
      return "チョキ";
    default:
      return "";
  }
}

bool isPlayer1Winner(int choice1, Choice choice2) {
  return (choice1 == ROCK && choice2 == SCISSORS) ||
         (choice1 == PAPER && choice2 == ROCK) ||
         (choice1 == SCISSORS && choice2 == PAPER);
}

void printBorder() {
  std::cout << "========================================" << std::endl;
}

int main() {
  srand(static_cast<unsigned int>(time(0)));

  std::cout << "＊＊＊＊＊ じゃんけんゲーム ＊＊＊＊＊" << std::endl;

  Choice player2Choice;
  int player1Choice;

  std::string playerName;
  std::cout << "あなたの名前を入力してください: ";
  std::cin >> playerName;

  printBorder();
  std::cout << "ゲームを始めましょう！" << std::endl;

  while (true) {
    std::cout << playerName << "さん、選んでください" << std::endl;
    std::cout << "(0: グー, 1: パー, 2: チョキ): ";
    std::cin >> static_cast<int&>(player1Choice);

    player2Choice = static_cast<Choice>(rand() % 3);

    printBorder();
    std::cout << playerName << "さんの選択: " << choiceToString(player1Choice) << std::endl;
    std::cout << "コンピューターの選択: " << choiceToString(player2Choice) << std::endl;

    if (player1Choice == player2Choice) {
      std::cout << "引き分けです！" << std::endl;
    } else if (isPlayer1Winner(player1Choice, player2Choice)) {
      std::cout << "＊＊＊ " << playerName << "さんの勝利です！ ＊＊＊" << std::endl;
    } else {
      std::cout << "＊＊＊ コンピューターの勝利です！ ＊＊＊" << std::endl;
    }

    printBorder();
    char playAgain;
    std::cout << "もう一度プレイしますか？ (y/n): ";
    std::cin >> playAgain;
    if (playAgain != 'y') {
      break;
    }

    std::cout << std::endl;
  }

  printBorder();
  std::cout << "お楽しみいただき、ありがとうございました！" << std::endl;
  printBorder();

  return 0;
}
