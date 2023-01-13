#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char player = 'X';

void display_board() {
    cout << "Tic Tac Toe" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void player_turn() {
    int choice;
    cout << "Jogador " << player << ", escolha uma posição (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    } else {
        cout << "Posição já escolhida, escolha outra posição." << endl;
        player_turn();
    }
}

char check_win() {
    // check for win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    // check for draw
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return '/';

    return ' ';
}

int main() {
    display_board();
    while (1) {
        player_turn();
        display_board();
        if (check_win() == 'X') {
            cout << "Jogador X ganhou!" << endl;
            break;
        } else if (check_win() == 'O') {
            cout << "Jogador O ganhou!" << endl;
            break;
        } else if (check_win() == ' ') {
            cout << "Empate!" << endl;
            break;
        }
    }
    return 0;
}
