#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"

int main() {
    stack s;
    init(&s, 100);
    char exp[100];  /* Input infix expression*/
    char post[100]; /* Output postfix expression*/
    char c;
    int expi = 0;
    int posti = 0;
    int num = 0;
    int flag = 0;

    /* Reading the expression until newline*/
    while ((c = getchar()) != '\n') {
        exp[expi++] = c;
    }
    exp[expi] = '\0';

    /* Check for valid expression*/
    if (isValid(exp) == 0) {
        printf("Invalid Expression\n");
        return 0;
    }

    /* Convert infix to postfix */
    for (int i = 0; i < expi; i++) {
        if (isdigit(exp[i])) {
            num = num * 10 + (exp[i] - '0');
            flag = 1; /* A number is being constructed*/
        } 
        else if(isspace(exp[i])){
            continue;
        }
        else {
            /* If a number has been constructed, push it to postfix*/
            if (flag == 1) {
                /* Push the number before any operator */
                char temp[10];
                int k = 0;
                while (num > 0) {
                    temp[k++] = (num % 10) + '0';
                    num /= 10;
                }
                for (int j = k - 1; j >= 0; j--) {
                    post[posti++] = temp[j];
                }
                post[posti++] = ' '; /* Space to separate each term */
                num = 0;
                flag = 0;
            }

            if (exp[i] == '(') {
                /* Push '(' to stack directly*/
                push(&s, '(');
            } 
            else if (exp[i] == ')') {
                /* Pop operators until '(' is found */
                while (peek(&s) != '(') {
                    post[posti++] = peek(&s);
                    post[posti++] = ' '; /* Space to separate each term */
                    pop(&s);
                }
                pop(&s); /* Pop '(' */
            } 
            else {
                /* Operator found and hence handle precedence */
                while (!isEmpty(s) && prior(exp[i], peek(&s)) == 0) {
                    post[posti++] = peek(&s);
                    post[posti++] = ' '; /* Space to separate each term */
                    pop(&s);
                }
                push(&s, exp[i]); /*Push current operator to stack if priority is more*/ 
            }
        }
    }

    /* If a number is at the end, push it to postfix*/
    if (flag == 1) {
        char temp[10];
        int k = 0;
        while (num > 0) {
            temp[k++] = (num % 10) + '0';
            num /= 10;
        }
        for (int j = k - 1; j >= 0; j--) {
            post[posti++] = temp[j];
        }
        post[posti++] = ' '; /* Space to separate each term */
    }

    /* Pop all operators from the stack */
    while (!isEmpty(s)) {
        post[posti++] = peek(&s);
        pop(&s);
    }

    /* Null terminate the postfix string for safetyn*/
    post[posti] = '\0';

    /* Print the postfix expression */
    printf("Postfix Expression: ");
    for (int i = 0; i < posti; i++) {
        printf("%c", post[i]);
    }
    printf("\n");
    return 0;
}
