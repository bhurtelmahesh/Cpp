#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void printHangman(int remainingAttempts) {
    std::cout << "   ________" << std::endl;
    std::cout << "   |      |" << std::endl;
    std::cout << "   |      " << (remainingAttempts < 6 ? "O" : " ") << std::endl;
    std::cout << "   |     " << (remainingAttempts < 2 ? "/" : " ") << (remainingAttempts < 5 ? "|" : " ") << (remainingAttempts < 1 ? "\\" : " ") << std::endl;
    std::cout << "   |      " << (remainingAttempts < 3 ? "|" : " ") << std::endl;
    std::cout << "   |     " << (remainingAttempts < 4 ? "/" : " ") << " " << (remainingAttempts < 4 ? "\\" : " ") << std::endl;
    std::cout << " __|__" << std::endl;
    std::cout << "|     |_____" << std::endl;
    std::cout << "|__________|" << std::endl;
    std::cout << std::endl;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    const std::string secretWords[] = {"apple", "banana", "orange", "grapes", "melon", "strawberry"};
    const int NUM_WORDS = sizeof(secretWords) / sizeof(secretWords[0]);

    std::string secretWord = secretWords[std::rand() % NUM_WORDS];
    std::string guessedWord(secretWord.length(), '_');

    int maxAttempts = 6;
    int remainingAttempts = maxAttempts;
    char guess;
    bool isCorrect = false;

    std::cout << "-------------------------" << std::endl;
    std::cout << "|    ハングマンゲーム！   |" << std::endl;
    std::cout << "-------------------------" << std::endl;

    std::cout << "秘密の単語を一文字ずつ予想して当ててください。" << std::endl;
    std::cout << "単語を当てるためには" << maxAttempts << "回の予想ができます。" << std::endl;
    std::cout << std::endl;

    while (remainingAttempts > 0) {
        std::cout << "残りの予想回数: " << remainingAttempts << std::endl;
        std::cout << "予想した文字: " << guessedWord << std::endl;
        std::cout << "予想を入力してください: ";
        std::cin >> guess;
        std::cout << std::endl;

        bool isGuessCorrect = false;

        for (size_t i = 0; i < secretWord.length(); ++i) {
            if (secretWord[i] == guess) {
                guessedWord[i] = guess;
                isGuessCorrect = true;
            }
        }

        if (isGuessCorrect) {
            std::cout << "正解です！文字 '" << guess << "' は秘密の単語に含まれています。" << std::endl;
        } else {
            std::cout << "残念ながら不正解です。文字 '" << guess << "' は秘密の単語に含まれていません。" << std::endl;
            printHangman(remainingAttempts);
            --remainingAttempts;
        }

        std::cout << std::endl;

        if (guessedWord == secretWord) {
            isCorrect = true;
            break;
        }
    }

    if (isCorrect) {

        std::cout << "******************************" << std::endl;
        std::cout << "おめでとうございます！秘密の単語 '" << secretWord << "' を当てました。" << std::endl;
        std::cout << "******************************" << std::endl;

    } else {
        std::cout << "******************************" << std::endl;
        std::cout << "ゲームオーバー！秘密の単語は '" << secretWord << "' でした。" << std::endl;
        std::cout << "******************************" << std::endl;

    }

    return 0;
}
