#include <iostream>

// 素数かどうかをチェックする関数
bool isPrime(int number) {
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main() {
    int start, end;

    std::cout << "素数チェッカー\n";
    std::cout << "範囲を入力してください（開始 終了）：";
    std::cin >> start >> end;

    std::cout << start << " から " << end << " の範囲の素数は次の通りです:\n";

    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
