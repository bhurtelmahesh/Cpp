#include <iostream>

// 2つの数値の和を計算する関数
int sum(int a, int b) {
    return a + b;
}

// 2つの数値の差を計算する関数
int difference(int a, int b) {
    return a - b;
}

// 2つの数値の積を計算する関数
int product(int a, int b) {
    return a * b;
}

// 2つの数値の商を計算する関数
double division(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        std::cout << "エラー：ゼロによる除算\n";
        return 0;
    }
}

int main() {
    int num1, num2;
    char operation;

    std::cout << "電卓プログラムへようこそ！\n";

    do {
        std::cout << "\n最初の数値を入力してください：";
        std::cin >> num1;

        std::cout << "次の数値を入力してください：";
        std::cin >> num2;

        std::cout << "演算子を入力してください（+、-、*、/）：";
        std::cin >> operation;

        int result;
        double resultDouble;
        bool isValidOperation = true;

        switch (operation) {
            case '+':
                result = sum(num1, num2);
                std::cout << "結果：" << result << std::endl;
                break;

            case '-':
                result = difference(num1, num2);
                std::cout << "結果：" << result << std::endl;
                break;

            case '*':
                result = product(num1, num2);
                std::cout << "結果：" << result << std::endl;
                break;

            case '/':
                resultDouble = division(num1, num2);
                std::cout << "結果：" << resultDouble << std::endl;
                break;

            default:
                std::cout << "無効な演算子です。もう一度お試しください。\n";
                isValidOperation = false;
                break;
        }

        // 演算子が有効かどうかをチェックし、プログラムの継続または終了を決定する
        if (!isValidOperation) {
            continue;
        }

        char choice;
        std::cout << "別の計算を行いますか？（Y/N）：";
        std::cin >> choice;

        if (choice == 'N' || choice == 'n') {
            break;
        }

    } while (true);

    std::cout << "\n電卓プログラムのご利用ありがとうございました。さようなら！\n";

    return 0;
}
