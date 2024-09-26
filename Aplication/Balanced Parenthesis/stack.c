#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*Initialise the stack*/
void init(stack * s, int size){
    s->size = size;
    s->top = -1;
    s->symbol = (char*)(malloc(sizeof(char)*size));
}

/*Push the contents into stack*/
void push(stack * s, char bracket){
    /*If stack full simply return*/
    if(s->top+1 == s->size){
        return;
    }
    s->symbol[++s->top] = bracket;
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
char peek(stack s){
    /*If stack empty return character 'n'*/
    if(s.top == -1){
        return 'n';
    }
    return s.symbol[s.top];
}