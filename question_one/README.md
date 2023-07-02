# Fibonacci Sequence Calculation

This program calculates the Fibonacci sequence using dynamic programming and arithmetic operations. It is written in C and consists of multiple files: `main.c`, `fibonacci.c`, and `fibonacci.h`.

## Implementations

The problem can be solved using the following implementations:

- `main.c`: Main program to interact with the user and call the other functions
- `fibonacci.c`: Contains the implementation of the fibonacci function using dynamic programming
- `fibonacci.h`: Header file containing function declarations and macros

## Development Environment

The code in this repository was developed and tested using the following environment:

- **Operating System:** Ubuntu 16.04 LTS (64-bit)
- **Compiler:** GCC (GNU Compiler Collection) version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.12)
- **Editor:** Vim, Visual Studio Code

## Compilation

To compile the source code, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the source code files (`main.c`, `fibonacci.c`, and `fibonacci.h`).
3. Run the following command:

`bash script`
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu99 main.c fibonacci.c -o fibonacci -g
```
### Running the Program

To run the program, execute the following steps:

* Ensure that the compilation process is completed successfully.

* In the same terminal or command prompt, run the following command:

`bash script`
```
valgrind --leak-check=full ./fibonacci
```
The program will calculate the Fibonacci sequence based on the given arithmetic operations and display the results.

`valgrind` will analyze your program's memory usage and provide a report. It will detect any memory leaks and provide information about their locations.

### Expected Output

The program will print the calculated values of add, mul, sub, and fibo as the output, similar to the following:

```
(xenial)kitembe@localhost:~/2023Apache_AGE_InternshipProgram/Apache_AGE_2023_Internship/question_one$ valgrind --leak-check=full ./fibonacci
==29476== Memcheck, a memory error detector
==29476== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==29476== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==29476== Command: ./fibonacci
==29476== 
Addition : 16
Multiplication : 20
Subtraction : -4
4th fibonacci number : 2
==29476== 
==29476== HEAP SUMMARY:
==29476==     in use at exit: 0 bytes in 0 blocks
==29476==   total heap usage: 5 allocs, 5 frees, 1,088 bytes allocated
==29476== 
==29476== All heap blocks were freed -- no leaks are possible
==29476== 
==29476== For counts of detected and suppressed errors, rerun with: -v
==29476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
(xenial)kitembe@localhost:~/2023Apache_AGE_InternshipProgram/Apache_AGE_2023_Internship/question_one$
```

### Contributing

Feel free to contribute to this repository by creating pull requests. If you encounter any issues or have suggestions for improvement, please open an issue.