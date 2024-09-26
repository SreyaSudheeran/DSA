#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <limits.h>

/*Initialise the stack*/
void init(stack * s, int size){
    s->size = size;
    s->top = -1;
    s->symbol = (int*)(malloc(sizeof(char)*size));
}

/*Push the contents into stack*/
void push(stack * s, int num){
    /*If stack full simply return*/
    if(s->top+1 == s->size){
        return;
    }
    s->symbol[++s->top] = num;
    return;
}

/*Pop the contents from stack*/
void pop(stack * s){
    /*If stack empty simply return*/
    if(s->top == -1){
        return;
    }
    s->top--;
}

/*Show the content in top of the stack*/
int peek(stack s){
    /*If stack empty return character INT_MIN*/
    if(s.top == -1){
        return INT_MIN;
    }
    return s.symbol[s.top];
}