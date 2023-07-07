#include <iostream>
#include <fstream>
#include <string>

// 顧客情報を格納する構造体
struct Customer {
    std::string name;
    std::string accountNumber;
    double balance;
};

// 顧客情報をファイルに保存する関数
void saveCustomerInfo(const Customer& customer) {
    FILE* file = fopen("customer_info.txt", "a");

    if (file != nullptr) {
        fprintf(file, "%s %s %.2f\n", customer.name.c_str(), customer.accountNumber.c_str(), customer.balance);
        fclose(file);
        std::cout << "顧客情報が保存されました。\n";
    } else {
        std::cerr << "ファイルを開くことができませんでした。\n";
    }
}

// 顧客情報をファイルから読み込む関数
void loadCustomerInfo() {
    FILE* file = fopen("customer_info.txt", "r");

    if (file != nullptr) {
        std::cout << "顧客情報:\n";
        std::cout << "------------------------------\n";
        char name[100];
        char accountNumber[100];
        double balance;

        while (fscanf(file, "%s %s %lf\n", name, accountNumber, &balance) != EOF) {
            std::cout << "名前: " << name << "\n";
            std::cout << "口座番号: " << accountNumber << "\n";
            std::cout << "残高: " << balance << "\n";
            std::cout << "------------------------------\n";
        }

        fclose(file);
    } else {
        std::cerr << "ファイルを開くことができませんでした。\n";
    }
}

int main() {
    int choice;

    // ユーザーが終了を選ぶまでの無限ループ
    while (true) {
        // メニューオプションを表示
        std::cout << "銀行管理システム\n";
        std::cout << "1. 顧客情報を追加する\n";
        std::cout << "2. 顧客情報を表示する\n";
        std::cout << "3. 終了する\n";
        std::cout << "選択肢を入力してください: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Customer newCustomer;

                std::cout << "名前を入力してください: ";
                std::cin >> newCustomer.name;
                std::cout << "口座番号を入力してください: ";
                std::cin >> newCustomer.accountNumber;
                std::cout << "残高を入力してください: ";
                std::cin >> newCustomer.balance;

                saveCustomerInfo(newCustomer);
                break;
            }

            case 2:
                loadCustomerInfo();
                break;

            case 3:
                std::cout << "プログラムを終了します。\n";
                return 0;

            default:
                std::cout << "無効な選択肢です。もう一度選んでください。\n";
                break;
        }

        std::cout << "続けるにはEnterキーを押してください...";
        std::cin.ignore();
        std::cin.get();
        std::cout << "\033[2J\033[1;1H";
    }

    return 0;
}
