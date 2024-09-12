typedef struct array{
	int * A;
	int len;
	int size;
}array;

void init(array * a, int size);
void append(array * a, int val);
void insert (array * a, int pos, int val);
void remove_at_pos(array * a, int pos);
void display(array a);
void max(array a);
void min(array a);
void reverse(array * a);
void merge(array a, array b);
