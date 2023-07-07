#include <iostream>

// ポインタを使用して変数の値を入れ替える関数
void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ポインタを使用して配列の要素を逆順に並び替える関数
void reverseArray(int* arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int num1 = 5;
    int num2 = 10;

    int* ptr1 = &num1; // num1のアドレスを指すポインタ
    int* ptr2 = &num2; // num2のアドレスを指すポインタ

    std::cout << "変数の値: " << num1 << ", " << num2 << std::endl;

    // ポインタを使用して変数の値を入れ替える
    swapValues(ptr1, ptr2);

    std::cout << "入れ替え後の値: " << num1 << ", " << num2 << std::endl;

    // 配列の宣言と初期化
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "配列の要素: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // ポインタを使用して配列の要素を逆順に並び替える
    reverseArray(arr, size);

    std::cout << "逆順の要素: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
