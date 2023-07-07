#include <iostream>
#include <ctime>

//TicTacToe game


//function declaration
void drawboard(char* spaces);
void playerMove(char *spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checktie(char *spaces);

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    std::cout << "\n===== Tic Tac Toe =====\n";

    drawboard(spaces);

    while(running){
        playerMove(spaces, player);
        drawboard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        if(checktie(spaces)){
            running = false;
            break;
        };
        computerMove(spaces, computer);
        drawboard(spaces);
         if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        if(checktie(spaces)){
            running = false;
            break;
        };
        

    }

    std::cout << "Thanks for playing!\n" << std::endl;
    std::cout << "*******************" << std::endl;

    return 0;
};

void drawboard(char* spaces){

    std::cout << '\n';
    std::cout << " _________________\n";
    std::cout << "|     |     |     |\n";
    std::cout << "|  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << " " << " |\n";
    std::cout << "|_____|_____|_____|\n";
    std::cout << "|     |     |     |\n";
    std::cout << "|  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << " " << " |\n";
    std::cout << "|_____|_____|_____|\n";
    std::cout << "|     |     |     |\n";
    std::cout << "|  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << " " << " |\n";
    std::cout << "|_____|_____|_____|\n";

    

};

void playerMove(char* spaces, char player) {
    int row, column;
    do {
        std::cout << "\nEnter the row (1-3): ";
        std::cin >> row;
        std::cout << "\nEnter the column (1-3) to place your marker: ";
        std::cin >> column;

        int index = (row - 1) * 3 + (column -1) ; // Calculate the index based on row and column
        if (row >= 1 && row <= 3 && column >= 1 && column <= 3 && spaces[index] == ' ') {
            spaces[index] = player;
            break;
        }
    } while (true);
}


// void playerMove(char *spaces, char player){
//     int number;
//     do{
//         std::cout << "Enter a spot to place your marker (1-9): ";
//         std::cin >> number;
//         number--;
//         if(spaces[number] == ' '){
//             spaces[number] = player;
//             break;
//         }


//     }while(!(number > 0) || !(number < 8));
// }
void computerMove(char* spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[1] != ' ' && spaces[1] == spaces[5] && spaces[5] == spaces[7]){
        spaces[1] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "\n*******************\n\n" << "You win!\n\n" << "*******************\n\n": std::cout<< "*******************\n\n" << "You Lose!\n\n" << "*******************\n\n" << std::endl;
    } else {
        return false;
    }
    return true;
}
bool checktie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "*******************\n" << std::endl;
    std:: cout << "It's a tie!\n";
    std::cout << "Thanks for playing!\n" << std::endl;
    std::cout << "*******************" << std::endl;

    return true;
}





// pointer example
// int main(){

//     int *pointer = nullptr;
//     int x = 123;

//     pointer = &x;

//     if(pointer == nullptr){
//         std::cout << "address was not assigned!\n";

//     } else {
//         std::cout << "address was assigned!\n";
//         std::cout << *pointer << std::endl;
//     }
//     return 0;
// }