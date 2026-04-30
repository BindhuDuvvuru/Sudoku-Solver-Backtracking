# 🧩 Sudoku Solver using Backtracking (CCC Project)

---

## 📌 Problem Statement

Sudoku is a logic-based puzzle where a 9x9 grid must be filled such that:

* Each row contains numbers from 1 to 9 without repetition
* Each column contains numbers from 1 to 9 without repetition
* Each 3x3 subgrid contains numbers from 1 to 9

Solving Sudoku manually can be time-consuming and complex.
Hence, an automated solution is required.

---

## 🎯 Objective

The objective of this project is to:

* Develop a system that solves Sudoku automatically
* Apply **Backtracking algorithm** to explore all possibilities
* Ensure correctness using constraint checking
* Demonstrate concepts learned in Data Structures / Algorithms

---

## 🧠 Concepts Used

* Backtracking Algorithm
* Recursion
* 2D Arrays
* Constraint Satisfaction

---

## ⚙️ Methodology

The system follows a recursive backtracking approach:

1. Scan the grid to find an empty cell
2. Try numbers from 1 to 9
3. Check if placing the number is valid
4. If valid → place number and move forward
5. If invalid → try next number
6. If no number works → backtrack
7. Repeat until solution is found

---

## 🧮 Algorithm

1. Find an empty cell in the grid
2. If no empty cell → solution found
3. Try numbers from 1 to 9
4. For each number:

   * Check row, column, and 3×3 grid
   * If safe → place number
   * Recursively solve remaining grid
5. If recursion fails → reset cell (backtrack)
6. Return solution

---

## 🚀 Features

* Solves any valid 9x9 Sudoku
* Efficient recursive solution
* Validates constraints
* Console-based interface (TUI)

---

## 📥 Input Format

* Enter a 9x9 grid
* Use `0` for empty cells

---

## 📤 Output

* Displays solved Sudoku grid

---

## 🗂️ Project Structure

```
Sudoku-Solver-Backtracking/
│── sudoku.cpp
│── README.md
│── sample_input.txt
│── output.png
```

---

## ▶️ How to Run

### Compile

```
g++ sudoku.cpp -o sudoku
```

### Run

```
./sudoku
```

---

## ⏱️ Time Complexity

* Worst Case: O(9^(n*n))
* Reduced using constraint checking

---

## 📊 Result

The program successfully solves Sudoku puzzles by filling all empty cells correctly while maintaining constraints.

---

## 🏁 Conclusion

The project demonstrates how **Backtracking** can be used to solve constraint-based problems efficiently.
It highlights the importance of recursion and validation in algorithm design.

---

## 🌟 Future Scope

* GUI-based Sudoku Solver
* Sudoku Puzzle Generator
* File-based input system
* Performance optimization

---

## 👩‍💻 Author

Bindhu Duvvuru
BTech Student
