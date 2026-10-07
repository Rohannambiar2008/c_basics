# C Basics

This repository is a collection of beginner-level C programs focused on learning core programming concepts through small, practical projects.

## Overview

The repo is structured to help build confidence in C by practicing:
- `switch` statements
- loops
- pattern printing
- arithmetic operations
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

## Topics Covered

- Control flow
- Decision making with `switch`
- Repetition with loops
- Pattern logic
- Arithmetic operations
- User input and output

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

## Notes

This repository is a learning project for beginner C programming. It is meant to help build a strong foundation before moving to arrays, strings, functions, pointers, and file handling.

More programs will be added as learning progresses.
