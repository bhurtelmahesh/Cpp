#include <iostream>
#include <cmath>

// 階乗を計算する関数
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    std::cout << "中級レベルのプログラムへようこそ！\n";

    int num;
    std::cout << "計算したい数値を入力してください: ";
    std::cin >> num;

    // 絶対値を計算して表示
    int absolute = std::abs(num);
    std::cout << "絶対値: " << absolute << std::endl;

    // 平方根を計算して表示
    double squareRoot = std::sqrt(absolute);
    std::cout << "平方根: " << squareRoot << std::endl;

    // 階乗を計算して表示
    int fact = factorial(absolute);
    std::cout << "階乗: " << fact << std::endl;

    std::cout << "プログラムの実行を終了します。\n";

    return 0;
}
