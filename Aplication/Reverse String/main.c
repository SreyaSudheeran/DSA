#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    char c;
    stack s;
    init(&s,100);
    /*Takes the string value until the user presses enter*/
    while((c = getchar())!= '\n'){
        /*Pushes each character into stack*/
        push(&s,c);
    }
    while(peek(s) != '%'){
        printf("%c",peek(s));
        /*Pops each character from stack after printing it*/
        pop(&s);
    }
    return 0;
}