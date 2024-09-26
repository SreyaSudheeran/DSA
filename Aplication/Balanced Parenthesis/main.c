#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    /*Flag to decide if correct representation or not*/
    int ans = 1;
    char c;
    char k;
    stack open;
    init(&open,10);
    /*Takes the character value until the user presses enter*/
    while((c = getchar()) != '\n'){
        /*Pushes each character into stack if it is a opening bracket*/
        if(c == '{'|| c == '['|| c == '('){
            push(&open,c);
        }
        else{
            k = peek(open);
            if ((k == '{' && c == '}') || (k == '(' && c == ')') || (k == '[' && c == ']')) {
                 /*Pops character from stack if brackets complemented*/
                pop(&open);  
            } 
            else {
                /*Sets flag = 0 since not correct form*/
                ans = 0; 
                break;
            }
            
        }
    }
    if (open.top != -1) { 
        /*If stack not empty it means imbalance in opening and closing bracket*/
        ans = 0; 
    }
    if(ans == 1){
        /*If correct form then print True*/
        printf("True");
        return 0;
    }
    else{
        /*If not correct form then print False*/
        printf("False");
        return 0;
    }
}