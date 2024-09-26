#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"
#include "limits.h"

int main() {
    /* Initialize the two stacks with respective sizes */
    init(5, 5);
    /* Push values into the stacks */
    push1(9);
    push2(10);
    push1(3);
    push2(8);
    push2(7);
    /*Print the value of poped elements in the stacks*/
    printf("%d\n",pop1());
    printf("%d\n",pop1());
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    printf("%d\n",pop2());
    return 0;
}