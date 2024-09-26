typedef struct stack{
    int *symbol;
    int top;
    int size;
}stack;

/*Initialise the fuctions*/
void push(stack * s, int num);
void init(stack * s, int size);
void pop(stack * s);
int peek(stack s);