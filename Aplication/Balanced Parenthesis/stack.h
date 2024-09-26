typedef struct stack{
    char *symbol;
    int top;
    int size;
}stack;

/*Initialise the fuctions*/
void push(stack * s, char bracket);
void init(stack * s, int size);
void pop(stack * s);
char peek(stack s);