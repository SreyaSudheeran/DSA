typedef struct twoStacks{
    int top1;
    int top2;
    int *arr;
    int size1;
    int size2;
} twoStacks;

/*Global declaration*/
extern twoStacks stack;

/* Function declarations */
void init(int size1, int size2);
void push1(int x);
void push2(int x);
int pop1();
int pop2();