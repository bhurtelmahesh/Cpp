#include <iostream>

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    std::string input;
    double temperature;
    char choice;

    std::cout << "\t\t***温度変換プログラム***\n";

    do {
        std::cout << "\nメニュー:\n\n";
        std::cout << "1. FからCへ変換\n";
        std::cout << "2. CからFへ変換\n";
        std::cout << "3. 終了\n";
        std::cout << "選択してください (1-3): ";
        std::cin >> choice;

        // 入力バッファをクリア
        while (std::cin.get() != '\n') {
            continue;
        }

        switch (choice) {
            case '1':
                std::cout << "\nFでの温度を入力してください: ";
                std::getline(std::cin, input);
                temperature = std::stod(input);
                std::cout << "Cでの温度: " << fahrenheitToCelsius(temperature) << "°C\n";
                break;

            case '2':
                std::cout << "\nCでの温度を入力してください: ";
                std::getline(std::cin, input);
                temperature = std::stod(input);
                std::cout << "Fでの温度: " << celsiusToFahrenheit(temperature) << "°F\n";
                break;

            case '3':
                std::cout << "\nプログラムを終了します。さようなら！\n";
                break;

            default:
                std::cout << "\n無効な選択です。1から3の数字を入力してください。\n";
                break;
        }
    } while (choice != '3');

    return 0;
}
