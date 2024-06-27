#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char player);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = '0';
    bool running = true;

    drawBoard(spaces);

    while (running) {

        // Player move and board update
        playerMove(spaces, player);
        std::cout << "PLAYER MOVE\n" << std::endl;
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            std::cout << "Player wins!" << std::endl;

            running = false;
            break;
        }

        // Computer move and board update
        computerMove(spaces, computer);
        std::cout << "COMPUTER MOVE\n" << std::endl;
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)) {
            std::cout << "Computer wins!" << std::endl;

            running = false;
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << "\t\t\t\t\t\t\t\t\t_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t  " << spaces[0] << "  |  "<< spaces[1] <<"  |  "<< spaces[2] << "  "<< std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t  " << spaces[3] << "  |  "<< spaces[4] <<"  |  "<< spaces[5] << "  "<< std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t  " << spaces[6] << "  |  "<< spaces[7] <<"  |  "<< spaces[8] << "  "<< std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t     |     |     " << std::endl;
}
void playerMove(char *spaces, char player) {
    int number;

    do {
        std::cout << "Enter a number (1 - 9 corresponding to the board): ";
        std::cin >> number;
        number--;

        if (spaces[number] == ' ') {
            spaces[number] = player;
        }
            
    } while (number < 1 || number > 9);
}
void computerMove(char *spaces, char player) {
    int number;

    srand(time(NULL));
    
    while (true) {
        number = rand() % 9;

        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer) {
    char current = player;
    for (int i = 0; i < 2; i++) {
        if ((spaces[0] == current && spaces[1] == current && spaces[2] == current) ||
            (spaces[3] == current && spaces[4] == current && spaces[5] == current) ||
            (spaces[6] == current && spaces[7] == current && spaces[8] == current) ||
            (spaces[0] == current && spaces[3] == current && spaces[6] == current) ||
            (spaces[1] == current && spaces[4] == current && spaces[7] == current) ||
            (spaces[2] == current && spaces[5] == current && spaces[8] == current) ||
            (spaces[0] == current && spaces[4] == current && spaces[8] == current) ||
            (spaces[2] == current && spaces[4] == current && spaces[6] == current)) {
            return true;
        }
        current = computer;
    }

    if (checkTie(spaces)) {
        std::cout << "The game is a tie!" << std::endl;
        return true;
    }
    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }

    return true;
}