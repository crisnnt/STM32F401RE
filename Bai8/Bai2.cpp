#include <stdio.h>

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkForWin();
void displayBoard();
void markBoard(char mark, int choice);

int main() {
    int player = 1, choice;

    char mark;
    int gameStatus; 
    do {
        displayBoard();

        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark, choice);

        gameStatus = checkForWin();
        player++;

    } while (gameStatus == -1); 

    displayBoard();
    if (gameStatus == 1) {
        printf("==>\aPlayer %d win ", --player);
    } else {
        printf("==>\aGame draw");
    }
    return 0;
}

int checkForWin() {
    if (board[1] == board[2] && board[2] == board[3]) {
        return 1;
    } else if (board[4] == board[5] && board[5] == board[6]) {
        return 1;
    } else if (board[7] == board[8] && board[8] == board[9]) {
        return 1;
    } else if (board[1] == board[4] && board[4] == board[7]) {
        return 1;
    } else if (board[2] == board[5] && board[5] == board[8]) {
        return 1;
    } else if (board[3] == board[6] && board[6] == board[9]) {
        return 1;
    } else if (board[1] == board[5] && board[5] == board[9]) {
        return 1;
    } else if (board[3] == board[5] && board[5] == board[7]) {
        return 1;
    } else if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
        board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] 
        != '7' && board[8] != '8' && board[9] != '9') {
        return 0;
    } else {
        return -1;
    }
}

void displayBoard() {
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[1], board[2], board[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", board[4], board[5], board[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", board[7], board[8], board[9]);

    printf("     |     |     \n\n");
}

void markBoard(char mark, int choice) {
    if (choice == 1 && board[1] == '1') {
        board[1] = mark;
    } else if (choice == 2 && board[2] == '2') {
        board[2] = mark;
    } else if (choice == 3 && board[3] == '3') {
        board[3] = mark;
    } else if (choice == 4 && board[4] == '4') {
        board[4] = mark;
    } else if (choice == 5 && board[5] == '5') {
        board[5] = mark;
    } else if (choice == 6 && board[6] == '6') {
        board[6] = mark;
    } else if (choice == 7 && board[7] == '7') {
        board[7] = mark;
    } else if (choice == 8 && board[8] == '8') {
        board[8] = mark;
    } else if (choice == 9 && board[9] == '9') {
        board[9] = mark;
    } else {
        printf("Invalid move ");
    }
}

