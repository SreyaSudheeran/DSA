#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "limits.h"

/* Global variable of twoStacks */
twoStacks stack;

/* Initialize the two stack */
void init(int size1, int size2) {
    stack.size1 = size1;
    stack.size2 = size2;
    stack.top1 = -1;
    stack.top2 = size1;
    stack.arr = (int *)malloc(sizeof(int) * (size1 + size2));
    if (stack.arr == NULL) {
        return;
    }
}

/* Push an element onto the first stack */
void push1(int x) {
    /*If stack empty it will simply return */
    if (stack.top1 + 1 == stack.top2) {
        return;
    }
    stack.arr[++stack.top1] = x;
}

/* Push an element onto the second stack */
void push2(int x) {
    /*If stack empty it will simply return */
    if (stack.top1 + 1 == stack.top2) {
        return;
    }
    stack.arr[--stack.top2] = x;
}

/* Pop an element from the first stack */
int pop1() {
    /*If stack empty it will return int min*/
    if (stack.top1 == -1) {
        return INT_MIN;
    }
    return stack.arr[stack.top1--];
}

/* Pop an element from the second stack */
int pop2() {
    /*If stack empty it will return int min*/
    if (stack.top2 == stack.size1) {
        return INT_MIN;
    }
    return stack.arr[stack.top2++];
}