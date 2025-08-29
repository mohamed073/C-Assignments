#include <iostream>
using namespace std;

int current_player = 1;
char matrix[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void display_board() {
    for (int r = 0; r < 3; ++r) {
        cout << " " << matrix[r][0] << " | " << matrix[r][1] << " | " << matrix[r][2] << endl;
        if (r < 2) cout << "---|---|---" << endl;
    }
    cout << endl;
}

void makeMove(char mark) {
    int choice;
    cout << "Player " << current_player << ", Enter your move (1-9): ";
    cin >> choice;

    if (choice < 1 || choice > 9) {
        cout << "Invalid choice! Must be 1-9.\n" << endl;
        current_player = 3 - current_player;
        return;
    }

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (matrix[row][col] != ' ') {
        cout << "Cell already taken! Try again.\n" << endl;
        current_player = 3 - current_player;
        return;
    }

    matrix[row][col] = mark;
}

int checkWiner() {
    for (int r = 0; r < 3; ++r) {
        if (matrix[r][0] != ' ' && matrix[r][0] == matrix[r][1] && matrix[r][1] == matrix[r][2])
            return 1;
    }
    for (int c = 0; c < 3; ++c) {
        if (matrix[0][c] != ' ' && matrix[0][c] == matrix[1][c] && matrix[1][c] == matrix[2][c])
            return 1;
    }
    if (matrix[0][0] != ' ' && matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
        return 1;
    if (matrix[0][2] != ' ' && matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
        return 1;

    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            if (matrix[r][c] == ' ')
                return -1;
        }
    }
    return 0;
}

int main() {
    int status;
    char mark;

    do {
        display_board();
        mark = (current_player == 1) ? 'X' : 'O';
        makeMove(mark);
        status = checkWiner();
        current_player = 3 - current_player;
    } while (status == -1);

    display_board();

    if (status == 1) {
        cout << "Player " << (3 - current_player) << " wins!" << endl;
    } else {
        cout << "It is a draw!" << endl;
    }

    return 0;
}
