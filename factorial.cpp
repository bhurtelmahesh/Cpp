#include <iostream>

// 階乗を計算する再帰関数
int factorial(int n) {
    // ベースケース: 0の階乗は1
    if (n == 0) {
        return 1;
    }
    // 再帰呼び出し: nの階乗はn * (n-1)の階乗と同じ
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    std::cout << "階乗を計算する数を入力してください: ";
    std::cin >> n;

    // 階乗の計算と結果の表示
    int result = factorial(n);
    std::cout << n << "の階乗は" << result << "です。\n";

    return 0;
}
