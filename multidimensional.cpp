#include <iostream>

const int ROWS = 3;
const int COLS = 3;

// 多次元配列を出力する関数
void printMatrix(const int matrix[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// 多次元配列の要素の合計を計算する関数
int sumMatrix(const int matrix[][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int matrix[ROWS][COLS];

    // 多次元配列の要素を入力する
    std::cout << "3x3 の行列の要素を入力してください:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // 多次元配列の内容を表示する
    std::cout << "行列の内容:\n";
    printMatrix(matrix);

    // 多次元配列の要素の合計を計算する
    int totalSum = sumMatrix(matrix);
    std::cout << "行列の要素の合計: " << totalSum << std::endl;

    return 0;
}
