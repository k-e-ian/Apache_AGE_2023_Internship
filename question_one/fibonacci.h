#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum TypeTag {
    ADD,
    MUL,
    SUB,
    DIV,
    FIBO
} TypeTag;

typedef struct Node {
    TypeTag type;
    int left;
    int right;
    int result;
} Node;

Node *makeFunc(TypeTag type, int left, int right);
int calc(Node *node);

#endif /* FIBONACCI_H */