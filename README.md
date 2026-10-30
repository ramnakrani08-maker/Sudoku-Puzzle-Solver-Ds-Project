Sudoku Puzzle Solver

Data Structures Project

1. Project Overview

The Sudoku Puzzle Solver is a C++ based project developed for the Data Structures subject. It automatically solves a 9×9 Sudoku puzzle using the Backtracking Algorithm.

The user enters the Sudoku puzzle row by row. Empty cells are represented by "0". The program checks whether the entered numbers follow Sudoku rules and then finds the correct solution.

If a valid solution exists, the program displays the completed Sudoku grid. Otherwise, it displays an appropriate error message.

2. Project Objectives

- To understand and implement the Backtracking Algorithm.
- To solve a 9×9 Sudoku puzzle automatically.
- To apply problem-solving techniques using recursion.
- To check the validity of Sudoku numbers.
- To understand how algorithms solve complex problems step by step.

3. Technologies Used

- Programming Language: C++
- Compiler: GCC / MinGW / Turbo C++ (if supported)
- Concepts: Recursion, Backtracking, Functions, 2D Arrays
- Libraries: iostream, string, sstream, cstdlib

4. Algorithm Used

Backtracking Algorithm

Backtracking is an algorithmic technique that tries different possible solutions until it finds the correct one.

In this project:

1. The program searches for an empty cell in the Sudoku grid.
2. It tries numbers from 1 to 9.
3. It checks whether the number is valid in the current row, column and 3×3 box.
4. If the number is valid, it places the number in the empty cell.
5. It recursively solves the remaining puzzle.
6. If a number leads to an incorrect solution, the program removes it and tries another number.
7. The process continues until the entire Sudoku puzzle is solved.

5. Sudoku Rules

A valid Sudoku solution must follow these rules:

- Each row must contain numbers from 1 to 9 without repetition.
- Each column must contain numbers from 1 to 9 without repetition.
- Each 3×3 box must contain numbers from 1 to 9 without repetition.
- Empty cells are represented by "0" during input.

6. Main Functions

Function| Description
"printGrid()"| Displays the Sudoku grid.
"isSafe()"| Checks whether a number can be placed in a cell.
"findEmptyCell()"| Finds an empty cell in the grid.
"solveSudoku()"| Solves the puzzle using backtracking and recursion.
"isStartValid()"| Checks whether the initial puzzle contains repeated numbers.
"readRow()"| Reads and validates one row of input.
"readGrid()"| Takes the complete Sudoku puzzle from the user.
"main()"| Controls the execution of the program.

7. How to Run the Project

Step 1: Install a C++ compiler such as GCC or MinGW.

Step 2: Save the source code in a file named:

"SudokuSolver.cpp"

Step 3: Compile the program using:

g++ SudokuSolver.cpp -o SudokuSolver

Step 4: Run the program:

./SudokuSolver

For Windows:

SudokuSolver.exe

8. Input Format

The program asks the user to enter 9 rows of Sudoku numbers.

- Enter exactly 9 numbers in each row.
- Separate numbers using commas.
- Enter "0" for empty cells.

Example Input:

5,3,0,0,7,0,0,0,0
6,0,0,1,9,5,0,0,0
0,9,8,0,0,0,0,6,0
8,0,0,0,6,0,0,0,3
4,0,0,8,0,3,0,0,1
7,0,0,0,2,0,0,0,6
0,6,0,0,0,0,2,8,0
0,0,0,4,1,9,0,0,5
0,0,0,0,8,0,0,7,9

9. Expected Output

The program displays the original Sudoku puzzle and then prints the solved puzzle.

Solved puzzle:

5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9

10. Advantages

- Automatically solves Sudoku puzzles.
- Checks invalid and repeated numbers.
- Uses recursion and backtracking.
- Easy to understand and operate.
- Demonstrates practical applications of algorithms.

11. Limitations

- Supports only 9×9 Sudoku puzzles.
- Requires exactly 9 numbers in each input row.
- Uses a basic console-based interface.
- Solving time depends on the complexity of the puzzle.

12. Conclusion

The Sudoku Puzzle Solver project demonstrates the practical implementation of the Backtracking Algorithm using C++. It uses recursion, functions and two-dimensional arrays to solve Sudoku puzzles.

Through this project, we understand how backtracking explores different possibilities, checks conditions and finds the correct solution. This project helps us understand the importance of algorithms and problem-solving techniques in Data Structures.

---

Project: Sudoku Puzzle Solver
Subject: Data Structures
Language: C++
Algorithm: Backtracking
Project Type: Console-Based Application
