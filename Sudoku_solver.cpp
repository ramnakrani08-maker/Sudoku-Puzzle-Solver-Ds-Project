#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

const int N = 9;

void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        if (row % 3 == 0 && row != 0) {
            cout << "------+-------+------" << endl;
        }
        for (int col = 0; col < N; col++) {
            if (col % 3 == 0 && col != 0) {
                cout << "| ";
            }
            if (grid[row][col] == 0) {
                cout << ". ";
            } else {
                cout << grid[row][col] << " ";
            }
        }
        cout << endl;
    }
}

bool isSafe(int grid[N][N], int row, int col, int num) {
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num) {
            return false;
        }
        if (grid[i][col] == num) {
            return false;
        }
    }
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }
    return true;
}

bool findEmptyCell(int grid[N][N], int &row, int &col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}

bool solveSudoku(int grid[N][N]) {
    int row, col;
    if (!findEmptyCell(grid, row, col)) {
        return true;
    }
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}

bool isStartValid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            int num = grid[row][col];
            if (num != 0) {
                grid[row][col] = 0;
                bool ok = isSafe(grid, row, col, num);
                grid[row][col] = num;
                if (!ok) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool readRow(string line, int values[N]) {
    for (size_t i = 0; i < line.size(); i++) {
        if (line[i] == ',') {
            line[i] = ' ';
        }
    }
    stringstream ss(line);
    int count = 0;
    int number;
    while (ss >> number) {
        if (count == N || number < 0 || number > 9) {
            return false;
        }
        values[count] = number;
        count++;
    }
    if (count != N || !ss.eof()) {
        return false;
    }
    return true;
}

void readGrid(int grid[N][N]) {
    cout << "Enter the puzzle row by row." << endl;
    cout << "Write 9 numbers in each row with a comma after every number." << endl;
    cout << "Write 0 for an empty cell." << endl;
    cout << "Example: 5,3,0,0,7,0,0,0,0" << endl << endl;
    string line;
    for (int row = 0; row < N; row++) {
        while (true) {
            cout << "Row " << row + 1 << ": ";
            if (!getline(cin, line)) {
                cout << endl << "Input ended. Please run the program again." << endl;
                exit(0);
            }
            if (readRow(line, grid[row])) {
                break;
            }
            cout << "Wrong input. Enter exactly 9 numbers from 0 to 9." << endl;
        }
    }
}

int main() {
    int grid[N][N];

    cout << "SUDOKU PROBLEM SOLVER" << endl << endl;
    readGrid(grid);

    cout << endl << "Puzzle:" << endl;
    printGrid(grid);

    if (!isStartValid(grid)) {
        cout << endl << "The puzzle has repeated numbers. It cannot be solved." << endl;
        return 0;
    }

    if (solveSudoku(grid)) {
        cout << endl << "Solved puzzle:" << endl;
        printGrid(grid);
    } else {
        cout << endl << "No solution exists for this puzzle." << endl;
    }

    return 0;
}
