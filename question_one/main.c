#include "fibonacci.h"

int main(void) { 
    Node *add = makeFunc(ADD, 10, 6);
    calc(add);

    Node *mul = makeFunc(MUL, 5, 4);
    calc(mul);

    Node *sub = makeFunc(SUB, mul->result, add->result);
    calc(sub);

    Node *fibo = makeFunc(FIBO, sub->result, 0);
    calc(fibo);

    /* freeing memory */
    free(add);
    free(mul);
    free(sub);
    free(fibo);

    return 0;
}