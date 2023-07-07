#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];

    // 乱数の生成と配列への格納
    std::srand(static_cast<unsigned>(std::time(0)));
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        numbers[i] = std::rand() % 100 + 1; // 1から100までの乱数を生成
    }

    std::cout << "0から100の範囲の数を当ててください。\n";
    std::cout << "入力した数が配列に含まれているかどうか判定します。\n";

    int guess;
    bool found = false;

    while (!found) {
        std::cout << "数を入力してください: ";
        std::cin >> guess;

        // 配列の探索
        for (int i = 0; i < ARRAY_SIZE; ++i) {
            if (numbers[i] == guess) {
                found = true;
                break;
            }
        }

        if (found) {
            std::cout << "正解です！配列に含まれています。\n";
        } else {
            std::cout << "不正解です。もう一度試してください。\n";
        }
    }

    return 0;
}
