#include <iostream>


// 配列とメソッド
void arrayExample() {
    const int SIZE = 5;
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    std::cout << "配列の要素: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

// 多次元配列
void multidimensionalArrayExample() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    std::cout << "行列の要素:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


// 配列の最大値
int findMax(const int* arr, int size) {
    if (size == 1)
        return arr[0];
    
    int max = findMax(arr + 1, size - 1);
    return (arr[0] > max) ? arr[0] : max;
}

// 配列をreverse
void reverseArray(int* arr, int start, int end) {
    if (start >= end)
        return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverseArray(arr, start + 1, end - 1);
}




// 配列を出力
void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// 配列の要素を検索する関数
bool searchArray(const int* arr, int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // 配列の要素を入力する
    std::cout << "整数を " << SIZE << " 個入力してください: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> numbers[i];
    }

    // 配列の内容を表示する
    std::cout << "配列の内容: ";
    printArray(numbers, SIZE);

    // 特定の値の検索
    int target;
    std::cout << "検索する値を入力してください: ";
    std::cin >> target;

    if (searchArray(numbers, SIZE, target)) {
        std::cout << target << " は配列に存在します。\n";
    } else {
        std::cout << target << " は配列に存在しません。\n";
    }

    // 配列の要素を特定の値で埋める
    int fillValue;
    std::cout << "配列を埋める値を入力してください: ";
    std::cin >> fillValue;

    std::fill(numbers, numbers + SIZE, fillValue);

    // 埋められた配列の内容を表示する
    std::cout << "埋められた配列の内容: ";
    printArray(numbers, SIZE);

    // 配列のバイトサイズを取得する
    std::cout << "配列のバイトサイズ: " << sizeof(numbers) << std::endl;

    return 0;
}
