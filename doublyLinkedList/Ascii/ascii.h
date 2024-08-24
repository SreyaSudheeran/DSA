/*ASCII ADT */
typedef struct node{
	int data;
	struct node * prev;
	struct node * next;
}node;

typedef struct ASCII{
	node * front;
	node * rear;
}ASCII;

void init_ASCII(ASCII * L);
void ASCII_of(char ch, ASCII *L);
void traverse(ASCII L);
void destroy(ASCII * L);
