#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"

int main(){
    int c;
    stack s;
    init(&s,100);
    /*Takes the number which has to be converted*/
    scanf("%d",&c);
    while(c != 0){
        /*Pushes remainder after dividing with 2 into stack*/
        push(&s,c%2);
        /*Divide the number by 2*/
        c = c/2;
    }
    while(peek(s) != INT_MIN){
        printf("%d",peek(s));
        /*Pops each character from stack after printing it*/
        pop(&s);
    }
    return 0;
}