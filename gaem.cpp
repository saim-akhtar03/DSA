#include <iostream>
#include <vector>

using namespace std;

// Function to initialize the game board
void initializeBoard(vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        vector<char> row;
        for (int j = 0; j < 3; j++) {
            row.push_back(' ');
        }
        board.push_back(row);
    }
}

// Function to print the game board
void printBoard(const vector<vector<char>>& board) {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; // Row win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; // Column win
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; // Diagonal win (top-right to bottom-left)
    }
    return false;
}

// Function to play the game
void playGame() {
    vector<vector<char>> board;
    initializeBoard(board);
    char currentPlayer = 'X';
    int row, col;
    bool gameOver = false;
    int moves = 0;

    while (!gameOver && moves < 9) {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check if the chosen cell is valid
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            moves++;

            // Check if the current player has won
            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameOver = true;
            } else {
                // Switch to the other player
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    if (!gameOver) {
        printBoard(board);
        cout << "It's a draw!" << endl;
    }
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    playGame();
    return 0;
}