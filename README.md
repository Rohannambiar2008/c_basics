1| # C Basics
2| 
3| This repository is a collection of beginner-level C programs focused on learning core programming concepts through small, practical projects.
4| 
5| ## Overview
6| 
7| The repo is structured to help build confidence in C by practicing:
8| - `switch` statements
9| - loops
10| - pattern printing
11| - arithmetic operations
12| - arrays and strings
13| - input/output handling
14| - beginner-level problem solving
15| 
16| ## Repository Structure
17| 
18| ```text
19| c_basics/
20| ├── README.md
21| ├── calculator/
22| │   ├── README.md
23| │   └── main.c
24| ├── number-guessing-game/
25| │   ├── README.md
26| │   └── main.c
27| ├── patterns/
28| │   ├── README.md
29| │   ├── Pattern_Switch_case.c
30| │   └── Pattern_switch_case_part2.c
31| ├── student-marks/
32| │   ├── README.md
33| │   └── student_marks.c
34| ```
35| 
36| ## Projects Included
37| 
38| ### 1. Calculator
39| A beginner calculator program that performs:
40| - Addition
41| - Subtraction
42| - Multiplication
43| - Division
44| - Modulus
45| 
| It uses a menu-based `switch` structure and includes basic error handling for division by zero.
47| 
48| ### 2. Number Guessing Game
49| A simple random-number guessing game where the player tries to guess a number between 1 and 100.
50| 
| It includes:
51| - random number generation
52| - high/low hints
53| - attempt counting
54| - basic user input validation
55| 
56| ### 3. Patterns
57| This folder contains beginner pattern printing programs that practice:
58| - nested loops
59| - star printing
60| - spacing logic
61| - selection using `switch`
62| 
63| The programs include:
64| - triangle and square patterns
65| - left/right inclined triangles
66| - inverted patterns
67| 
68| ### 4. Student Marks
69| This project stores and processes student information using arrays.
70| 
| It includes:
71| - student name and roll number
72| - marks for Physics, Chemistry, Math, English, and CS
73| - total and average calculation
74| - grade assignment
75| - display of all student records
76| - search by name
77| - sorting by total marks
78| 
79| ## Topics Covered
80| 
81| - Control flow
82| - Decision making with `switch`
83| - Repetition with loops
84| - Pattern logic
85| - Arrays and strings
86| - Arithmetic operations
87| - User input and output
88| - Basic data processing
89| - Random number generation
90| 
91| ## How to Run
92| 
93| ### Run the calculator
94| ```bash
95| gcc calculator/main.c -o calculator
96| ./calculator
97| ```
98| 
99| ### Run the number guessing game
100| ```bash
101| gcc number-guessing-game/main.c -o number_guessing_game
102| ./number_guessing_game
103| ```
104| 
105| ### Run the pattern programs
106| ```bash
107| gcc patterns/Pattern_Switch_case.c -o pattern1
108| ./pattern1
109| ```
110| 
111| ```bash
112| gcc patterns/Pattern_switch_case_part2.c -o pattern2
113| ./pattern2
114| ```
115| 
116| ### Run the student marks program
117| ```bash
118| gcc student-marks/student_marks.c -o student_marks
119| ./student_marks
120| ```
121| 
122| ## Notes
123| 
124| This repository is a learning project for beginner C programming. It is meant to help build a strong foundation before moving to arrays, strings, functions, pointers, and file handling.
125| 
126| More programs will be added as learning progresses.
127| 