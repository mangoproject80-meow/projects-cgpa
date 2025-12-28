📄 Student CGPA Reporting System (C++)
Abstract
The Student CGPA Reporting System is a console-based C++ application designed to simulate an academic data collection and reporting workflow. The system captures structured student information, subject-level academic performance, and persists the processed data into a file-based report using C++ stream-oriented file handling.
This project demonstrates foundational systems-level concepts such as controlled user input, array-based data storage, procedural decomposition, and persistent storage through file systems, while maintaining a clear separation between data acquisition, presentation, and storage logic.

Project Motivation
Academic data processing is a recurring requirement across educational institutions, internal assessment tools, and administrative systems. This project aims to replicate a simplified version of such a workflow while emphasizing clarity of logic, explicit control flow, and low-level understanding of how data transitions from runtime memory to persistent storage.
The implementation avoids heavy abstractions in favor of transparent procedural logic, making it suitable for understanding how core C++ features operate under the hood.
Functional Overview

The application performs the following tasks:
Collects identifying information about a student
Accepts the number of subjects dynamically at runtime
Records subject names and corresponding marks
Displays subject-wise performance in a structured format
Generates a persistent academic report in a text file
Ensures proper file creation, writing, and closure
All operations are performed synchronously via console input/output.
Core Features
Console-based interactive input
Dynamic handling of subject count
Parallel storage of subject names and marks
Structured, human-readable output
File creation and write operations using C++ streams
Graceful handling of file creation failure

Clean termination with explicit resource release
Technical Concepts Demonstrated
1. Procedural Decomposition
The program separates responsibilities by delegating reporting and data capture logic to a dedicated function, improving readability and maintainability.
2. Runtime Data Handling
Arrays are sized based on user input, enabling the program to handle varying academic loads without recompilation.
3. File System Integration
The system uses C++’s ofstream to:
Create a report file if it does not exist
Overwrite existing reports when re-run
Write structured academic data line-by-line
This mirrors real-world logging and report-generation workflows.
4. Stream-Oriented I/O
The use of cin, cout, and file streams provides a consistent and intuitive data flow model between user input, program memory, and persistent storage.
File Output
Upon successful execution, the program generates the following file:
Student-CGPA-Report.txt

File Contents Include:
Student name
Registration number
Subject-wise marks in a tabular format
This output can be archived, reviewed, or extended for further processing.

Compilation and Execution
Requirements
GCC / G++ Compiler
Standard C++ environment
Compile
g++ student_cgpa.cpp -o student_cgpa
Run
./student_cgpa

Error Handling
The program verifies whether the output file was successfully created
If file creation fails, execution is terminated gracefully with a descriptive message
Prevents undefined behavior related to invalid file streams

Design Considerations
Explicit loops are used instead of higher-level abstractions to ensure clarity of control flow
Data is stored in memory before being written to disk, mimicking real reporting pipelines
Console output is mirrored into the file to maintain consistency between runtime output and stored records

Limitations
Subject names are read as single tokens (no spaces)
CGPA calculation logic can be extended further
File format is plain text (not CSV or binary)
Input validation is minimal by design for clarity

Future Enhancements
CGPA and grade computation logic
Support for subject names with spaces
CSV / database export
Struct-based data modeling
Multi-student batch processing
Append-mode file logging
Modularization into header and source files
Educational Value

This project reinforces:
Core C++ syntax and semantics
File system interaction
Data organization using parallel arrays
Realistic input/output workflows
Debugging and incremental feature extension
It serves as a strong foundational exercise for students transitioning into systems programming, backend development, or academic software tooling.

Author
Nikhil K
C++ | Systems Fundamentals | File Handling | Problem Solving