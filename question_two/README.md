# Recurrence Relation Implementation in C

This repository contains C implementations for the given recurrence relation `F(n) = F(n-3) + F(n-2)`, with initial values `F(0) = 0`, `F(1) = 1`, and `F(2) = 2`. The repository includes three different implementations: recursive, iterative, and dynamic programming.

### Implementations

The problem can be solved using the following implementations:

1. `f_recursive.c`: Recursive implementation
2. `f_iterative.c`: Iterative implementation
3. `f_dynamic.c`: Dynamic programming implementation

## Development Environment

The code in this repository was developed and tested using the following environment:

- **Operating System:** Ubuntu 16.04 LTS (64-bit)
- **Compiler:** GCC (GNU Compiler Collection) version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.12)
- **Editor:** Vim, Visual Studio Code

## How to Compile

To compile the C source files, you can use the GCC compiler. Here's how to do it:

1. Open the terminal and navigate to the root directory of this repository.

2. To compile all source files, execute the following command:
`bash script`
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -o recurrence f_recursive.c f_iterative.c f_dynamic.c main.c
```
To run the program, use the following command:

`bash script`
```
./recurrence
```
You will be prompted to enter the value of n for which you want to calculate F(n) using each approach.

The program will display the calculated F(n) using the recursive, iterative, and dynamic programming approaches, along with the real-time and CPU-time taken for each approach.

### Sample Output

Upon running the program and entering a value of n, you will see output similar to the following:

```
Enter the value of n: 10

Recursive: F(10) = 35
Time taken (Real-Time): 0.002343 seconds
Time taken (CPU-Time): 0.000000 seconds

Iterative: F(10) = 35
Time taken (Real-Time): 0.000021 seconds
Time taken (CPU-Time): 0.000000 seconds

Dynamic Programming: F(10) = 35
Time taken (Real-Time): 0.000020 seconds
Time taken (CPU-Time): 0.000000 seconds
```

### Contributing

Feel free to contribute to this repository by creating pull requests. If you encounter any issues or have suggestions for improvement, please open an issue.