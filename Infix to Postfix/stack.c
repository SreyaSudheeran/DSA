#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "stack.h"

/*Intialise the stack*/
void init(stack * s, int size){
    s->size = size;
    s ->top = -1;
    s->A = (char *)(malloc (sizeof(char)*size));
    return;
}

/*if c is greater than k then return 1*/
int prior(char c, char k) {
    /* Precedence values */
    int prec_c, prec_k;
    if (c == '(') 
        return 0; /* '(' has lowest precedence */
    if (k == '(') 
        return 1; /* Push anything over '(' */
    /* Determine precedence values */
    if (c == '^') 
        prec_c = 3;
    else if (c == '*' || c == '/')
        prec_c = 2;
    else if (c == '+' || c == '-') 
        prec_c = 1;
    else 
        prec_c = 0;

    if (k == '^') 
        prec_k = 3;
    else if (k == '*' || k == '/') 
        prec_k = 2;
    else if (k == '+' || k == '-') 
        prec_k = 1;
    else 
        prec_k = 0;

    if (prec_c > prec_k) {
        return 1; /* Push if current operator has higher precedence */
    } 
    else if (prec_c == prec_k) {
    /* For left-associative operators (+, -, *, /), we pop operators of the same precedence or higher. */
    /* For right-associative operators (^), we push operators of the same precedence. */ 
        if (c == '^') {
            return 1;
        } 
        else {
            return 0;
        }
    } 
    else {
        return 0; /* Pop if stack operator has higher precedence */
    }
}

/*If the stack is empty it will return 1*/
int isEmpty(stack s){
    if(s.top == -1){
        return 1;
    }
    return 0;
}

/*Pushes the value into the stack*/
void push(stack *s, char val){
    if((s->top+ 1) == s->size){
        return;
    }
    s->A[++s->top] = val;
    return;
}
/*Pops the value from stack*/
void pop (stack *s){
    if((s->top) == -1){
        return;
    }
   s->top --;
}

/*returns the topmost element*/
char peek(stack*s){
    return s->A[s->top];
}

/*Checks if the pair of brackets are matching*/
int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') 
        return 1;
    if (open == '{' && close == '}') 
        return 1;
    if (open == '[' && close == ']') 
        return 1;
    return 0;
}

/* Function to check if the infix is valid*/
int isValid(char *exp) {
    stack s;
    init(&s, 100); 
    int i;
    /*Flags*/
    int expectOperand = 0; 
    int lastOperator = 0; 
    int hasOperators = 0;   
    int hasNumbers = 0;      

    for (i = 0; exp[i] != '\0'; i++) {
        char curr = exp[i];

        /* Push opening brackets onto the stack */
        if (curr == '(' || curr == '{' || curr == '[') {
            push(&s, curr); 
            expectOperand = 0;
            lastOperator = 0; 
        } 
        /* Check if closing bracket matches with the top of the stack */
        else if (curr == ')' || curr == '}' || curr == ']') {
            if (isEmpty(s) || !isMatchingPair(peek(&s), curr)) {
                return 0; /* Mismatched or no matching opening bracket */
            }
            /* If the last character before closing was an operator, it's invalid */
            if (lastOperator) {
                return 0; /* Invalid if an operator is immediately inside parentheses */
            }
            pop(&s); /* Pop the matching opening bracket from the stack */
        } 
        /* If a digit is found, reset the expectOperand and lastOperator flags */
        else if (isdigit(curr)) {
            expectOperand = 0; 
            lastOperator = 0; 
            hasNumbers = 1; 
        } 
        /* Ignore spaces */
        else if (isspace(curr)) {
            continue; 
        } 
        /* Check for operators and validate placement */
        else if (curr == '+' || curr == '-' || curr == '*' || curr == '/' || curr == '^') {
            if (i == 0 || expectOperand == 1 || lastOperator == 1) {
                return 0; /* Invalid if the operator is the first char or appears without an operand */
            }
            expectOperand = 1; 
            lastOperator = 1; 
            hasOperators = 1; 
        } 
        /* Return 0 if an other character is found */
        else {
            return 0;
        }
    }

    /* Return 0 if the expression is empty */
    if (i == 0) {
        return 0; 
    }

    /* Return 0 if expression ends with an operator without an operand */
    if (expectOperand == 1) {
        return 0; 
    }

    /* Return 0 if it's just numbers with no operators */
    if (hasNumbers && !hasOperators) {
        return 0; 
    }

    /* Return valid if the stack is empty and the expression is balanced */
    return isEmpty(s); 
}
