typedef struct SSL{
	int val;
	struct SSL * next;
}SLL;
typedef SLL * list;

void init (list * l);
void append(list * l, int data);
void traverse(list l);
void insert_at_beg(list *l, int data);
void remove_at_pos(list *l, int pos);
void len(list l);
