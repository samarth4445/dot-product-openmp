# Dot Product Calculation with OpenMP

## Description

This repository contains a C program that calculates the dot product of two vectors using OpenMP for parallelization. The program prompts the user to enter the size of the vectors and their elements, then computes and displays the dot product along with the input vectors.

## Requirements

- **C Compiler with OpenMP Support**: Ensure that you have a C compiler installed that supports OpenMP (e.g., `gcc` or `clang`).
- **OpenMP Library**: The OpenMP library must be installed on your system.

## Compilation

Compile the program using the `-fopenmp` flag to enable OpenMP support:

```bash
gcc -fopenmp -o dot_product dot_product.c
```

## Running the Program

Execute the compiled program:

```bash
./dot_product
```

### Input Format

- **First Input**: An integer `n` representing the size of the vectors.
- **Next `n` Inputs**: Elements of vector **A**.
- **Next `n` Inputs**: Elements of vector **B**.

### Example

**Sample Input:**

```
Enter the size of the vectors: 3
Enter elements of vector A:
1.0
2.0
3.0
Enter elements of vector B:
4.0
5.0
6.0
```

**Sample Output:**

```
Vector A: 1.000000 2.000000 3.000000 
Vector B: 4.000000 5.000000 6.000000 
Dot product: 32.000000
```
