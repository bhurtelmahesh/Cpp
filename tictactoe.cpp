#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// ボードのサイズ
const int BOARD_SIZE = 3;

// ボードを表す型
using Board = std::vector<std::vector<char> >;

std::string playerName;

// ボードの初期化
void initializeBoard(Board& board) {
    board.resize(BOARD_SIZE, std::vector<char>(BOARD_SIZE, ' '));
}

// ボードの表示
void displayBoard(const Board& board) {
    std::cout << "-------------\n";
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            std::cout << "| " << board[i][j] << " ";
        }
        std::cout << "|\n";
        std::cout << "-------------\n";
    }
}

// プレイヤーの移動
void makePlayerMove(Board& board, char currentPlayer) {
    int row, col;
    std::cout << "行番号を入力してください (1-" << BOARD_SIZE << "): ";
    std::cin >> row;
    std::cout << "列番号を入力してください (1-" << BOARD_SIZE << "): ";
    std::cin >> col;
    board[row - 1][col - 1] = currentPlayer;
}

// コンピュータの移動
void makeComputerMove(Board& board, char currentPlayer) {
    int row, col;
    do {
        row = std::rand() % BOARD_SIZE;
        col = std::rand() % BOARD_SIZE;
    } while (board[row][col] != ' ');
    board[row][col] = currentPlayer;
}

// ゲームのメイン処理
void playGame() {
    Board board;
    initializeBoard(board);
    char currentPlayer = 'X';
    bool gameWon = false;
    int moves = 0;

    while (!gameWon && moves < BOARD_SIZE * BOARD_SIZE) {
        displayBoard(board);

        if (currentPlayer == 'X') {
            makePlayerMove(board, currentPlayer);
        } else {
            makeComputerMove(board, currentPlayer);
        }

        // 勝利判定
        for (int i = 0; i < BOARD_SIZE; ++i) {
            if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
                gameWon = true;
                break;
            }
            if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
                gameWon = true;
                break;
            }
        }
        if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
            gameWon = true;
        }
        if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
            gameWon = true;
        }

        // プレイヤーの交代
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

        // 手数の更新
        moves++;
    }

    displayBoard(board);

    // 結果の表示
    if (gameWon) {
        if (currentPlayer == 'X') {
            std::cout << "残念！コンピュータの勝利です。\n";
        } else {
            std::cout << "おめでとうございます！　" << playerName << "さんの勝利です。\n";
        }
    } else {
        std::cout << "引き分けです。\n";
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    std::cout << "Tic Tac Toeゲームを開始します。\n";
    std::cout << "プレイヤー名を入力してください: ";
    
    std::cin >> playerName;

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        std::cout << playerName << "さん、ゲームを始めます。\n";
        playGame();

        std::cout << "もう一度プレイしますか？ (y/n): ";
        std::cin >> playAgain;
    }

    std::cout << "ゲームを終了します。\n";

    return 0;
}
