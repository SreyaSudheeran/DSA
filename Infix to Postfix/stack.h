typedef struct stack{
    int size;
    int top;
    char * A;
}stack;
/*All functions*/
void init(stack * s, int size);
int prior(char c, char k);
int isEmpty(stack s);
void push(stack *s, char val);
void pop (stack *s);
char peek(stack*s);
int isValid(char * exp);
int isMatchingPair(char open, char close);