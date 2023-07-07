#include <iostream>

int main() {
    int* ptr = nullptr; // NULLポインタの初期化

    if (ptr == nullptr) {
        std::cout << "ptrはNULLポインタです。" << std::endl;
    } else {
        std::cout << "ptrはNULLポインタではありません。" << std::endl;
    }

    // NULLポインタへの値の代入
    int num = 10;
    ptr = &num;

    if (ptr != nullptr) {
        std::cout << "ptrはNULLポインタではありません。" << std::endl;
        std::cout << "ptrの値: " << *ptr << std::endl;
    }

    return 0;
}
