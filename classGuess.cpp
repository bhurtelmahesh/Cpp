#include <iostream>
#include <cstdlib>
#include <ctime>

class GuessingGame {
public:
  GuessingGame(int minRange, int maxRange) : min(minRange), max(maxRange) {
    srand(static_cast<unsigned int>(time(0)));  // 乱数生成器を初期化
    secretNumber = rand() % (max - min + 1) + min;  // 秘密の数を範囲内でランダムに生成
  }

  void play() {
    std::cout << "＊＊＊＊＊ 数当てゲーム ＊＊＊＊＊" << std::endl;

    int guess;
    int attempts = 0;

    while (true) {
      std::cout << "予想を入力してください (" << min << "-" << max << "): ";
      std::cin >> guess;

      attempts++;

      if (guess < secretNumber) {
        std::cout << "小さすぎます！もう一度予想してください。" << std::endl;
      } else if (guess > secretNumber) {
        std::cout << "大きすぎます！もう一度予想してください。" << std::endl;
      } else {
        std::cout << "＊＊＊ おめでとうございます！" << attempts << "回で正解しました！ ＊＊＊" << std::endl;
        break;
      }
    }
  }

private:
  int min;  // 数の最小値
  int max;  // 数の最大値
  int secretNumber;  // 秘密の数
};

int main() {
  GuessingGame game(1, 100);  // 数の範囲を1から100に設定

  std::cout << "----------------------------------------" << std::endl;
  std::cout << "   　　　　　　数当てゲーム" << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  game.play();  // ゲームを開始

  std::cout << "----------------------------------------" << std::endl;
  std::cout << "　　　　　お楽しみいただき、ありがとうございました！" << std::endl;
  std::cout << "----------------------------------------" << std::endl;

  return 0;
}
