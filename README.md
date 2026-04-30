# 🧩 Sudoku Solver using Backtracking

A C++ project that solves a 9x9 Sudoku puzzle using the Backtracking algorithm.
The program fills missing values while ensuring all Sudoku rules are satisfied.

---

## 🚀 Features

* Solves any valid 9x9 Sudoku puzzle
* Uses efficient backtracking approach
* Validates rows, columns, and 3x3 grids
* Simple console-based interface
* Fast and accurate solution

---

## 🧠 Concepts Used

* Backtracking Algorithm
* Recursion
* Constraint Checking
* 2D Arrays

---

## ⚙️ How It Works

1. The program scans the grid to find an empty cell (represented by `0`)
2. It tries numbers from **1 to 9**
3. For each number:

   * Checks if it is valid in the row, column, and 3×3 box
4. If valid → place number and move forward
5. If invalid → try next number
6. If no number works → **backtrack (undo previous step)**
7. Repeat until the puzzle is solved

---

## 📥 Input Format

* Enter a **9x9 grid**
* Use `0` for empty cells

### Example Input

```
0 0 0 2 6 0 7 0 1
6 8 0 0 7 0 0 9 0
1 9 0 0 0 4 5 0 0
8 2 0 1 0 0 0 4 0
0 0 4 6 0 2 9 0 0
0 5 0 0 0 3 0 2 8
0 0 9 3 0 0 0 7 4
0 4 0 0 5 0 0 3 6
7 0 3 0 1 8 0 0 0
```

---

## 📤 Output

The program prints the solved Sudoku grid.

---

## 🗂️ Project Structure

```
Sudoku-Solver-Backtracking/
│── sudoku.cpp        # Main source code
│── README.md         # Project documentation
│── sample_input.txt  # Sample input file
│── output.png        # Output screenshot
```

---

## ▶️ How to Run

### Step 1: Compile

```
g++ sudoku.cpp -o sudoku
```

### Step 2: Run

```
./sudoku
```

### Step 3: Enter input manually

---

## ⏱️ Time Complexity

* Worst Case: **O(9^(n*n))**
* Optimized using constraint checking

---

## ❗ Common Mistakes Avoided

* Incorrect 3x3 box calculation
* Missing backtracking step
* Not validating row/column properly

---

## 🌟 Future Improvements

* GUI-based Sudoku solver
* Input from file
* Sudoku generator
* Performance optimization

---

## 👩‍💻 Author

Bindhu Duvvuru
BTech Student | Aspiring Software Developer
