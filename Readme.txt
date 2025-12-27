Student Grade Calculation System (C)

Overview
The Student Grade Calculation System is a console-based application written in C that simulates a real-world academic grading workflow.
It collects student details, subject information, and marks, processes the data to compute total marks, average, percentage, and grade, and finally generates a persistent report file.
The project focuses on strengthening core C programming fundamentals, including dynamic memory allocation, string handling, conditional logic, and file I/O.

Features

Accepts complete student details (name, registration number, semester)
Supports subject names with spaces
Dynamically handles any number of subjects

Calculates:
Total marks
Average score
Percentage
Final grade
Generates a structured text report using file handling
Safe memory allocation with proper cleanup
Concepts & Technologies Used

C (ANSI Standard)

Dynamic memory allocation using calloc() and free()
String manipulation with <string.h>
Conditional logic for grading
File handling using FILE, fopen(), fprintf(), and fclose()
Basic error handling for memory allocation failure
Grading Logic
Grades are assigned based on the average marks:

Average Range	Grade
< 50	RA
50 – 59	B
60 – 69	B+
70 – 79	A
80 – 89	A+
90 – 100	O
Program Flow

Read student details
Read number of subjects
Dynamically allocate memory for marks
Store subject names and corresponding marks
Compute total, average, and percentage
Assign grade based on performance
Write all results to an output file
Free allocated memory and exit cleanly

Output
After execution, the program generates:
Student-Grade-Calculation.txt

The file contains:
Student information
Total marks
Grade and percentage
Subject-wise marks breakdown
This makes the output suitable for record keeping or academic review.

Compilation & Execution
gcc student_grade_calculation.c -o grade_calc
./grade_calc

Why This Project

This project demonstrates:
Strong understanding of core C fundamentals
Proper use of dynamic memory
Practical application of file systems
Clean procedural logic and structured output
It serves as a solid foundational project for beginners transitioning into systems programming or backend development.

Author
Nikhil K Upadhyay
C Programming | Problem Solving | Systems Fundamentals