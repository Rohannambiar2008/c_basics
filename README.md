# C Basics

This repository is a collection of beginner-level C programs focused on learning core programming concepts through small, practical projects.

## Overview

The repo is structured to help build confidence in C by practicing:
- `switch` statements
- loops
- pattern printing
- arithmetic operations
- arrays and strings
- input/output handling
- beginner-level problem solving

## Repository Structure

```text
c_basics/
├── README.md
├── calculator/
│   ├── README.md
│   └── main.c
├── patterns/
│   ├── README.md
│   ├── Pattern_Switch_case.c
│   └── Pattern_switch_case_part2.c
├── student-marks/
│   ├── README.md
│   └── student_marks.c
```

## Projects Included

### 1. Calculator
A beginner calculator program that performs:
- Addition
- Subtraction
- Multiplication
- Division
- Modulus

It uses a menu-based `switch` structure and includes basic error handling for division by zero.

### 2. Patterns
This folder contains beginner pattern printing programs that practice:
- nested loops
- star printing
- spacing logic
- selection using `switch`

The programs include:
- triangle and square patterns
- left/right inclined triangles
- inverted patterns

### 3. Student Marks
This project stores and processes student information using arrays.

It includes:
- student name and roll number
- marks for Physics, Chemistry, Math, English, and CS
- total and average calculation
- grade assignment
- display of all student records
- search by name
- sorting by total marks

## Topics Covered

- Control flow
- Decision making with `switch`
- Repetition with loops
- Pattern logic
- Arrays and strings
- Arithmetic operations
- User input and output
- Basic data processing

## How to Run

### Run the calculator
```bash
gcc calculator/main.c -o calculator
./calculator
```

### Run the pattern programs
```bash
gcc patterns/Pattern_Switch_case.c -o pattern1
./pattern1
```

```bash
gcc patterns/Pattern_switch_case_part2.c -o pattern2
./pattern2
```

### Run the student marks program
```bash
gcc student-marks/student_marks.c -o student_marks
./student_marks
```

## Notes

This repository is a learning project for beginner C programming. It is meant to help build a strong foundation before moving to arrays, strings, functions, pointers, and file handling.

More programs will be added as learning progresses.
