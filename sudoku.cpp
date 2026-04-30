#include <iostream>
using namespace std;

const int N = 9;

// Print Sudoku in formatted way
void printBoard(int grid[N][N]) {
    for (int i = 0; i < N; i++) {
        if (i % 3 == 0 && i != 0)
            cout << "---------------------\n";

        for (int j = 0; j < N; j++) {
            if (j % 3 == 0 && j != 0)
                cout << "| ";

            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if number is safe to place
bool isSafe(int grid[N][N], int row, int col, int num) {

    // Check row
    for (int x = 0; x < N; x++)
        if (grid[row][x] == num)
            return false;

    // Check column
    for (int x = 0; x < N; x++)
        if (grid[x][col] == num)
            return false;

    // Check 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;

    return true;
}

// Solve Sudoku using backtracking
bool solveSudoku(int grid[N][N]) {
    int row = -1, col = -1;
    bool emptyFound = false;

    // Find empty cell
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                emptyFound = true;
                break;
            }
        }
        if (emptyFound) break;
    }

    // No empty cell → solved
    if (!emptyFound)
        return true;

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            // Backtrack
            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int grid[N][N];

    cout << "Enter Sudoku (use 0 for empty cells):\n";

    // Input
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> grid[i][j];

    // Solve
    if (solveSudoku(grid)) {
        cout << "\nSolved Sudoku:\n";
        printBoard(grid);
    } else {
        cout << "\nNo solution exists.\n";
    }

    return 0;
}