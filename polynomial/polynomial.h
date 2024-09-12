typedef struct term{
	int coeff;
	int power;
}term;

typedef struct poly{
	int size;
	int len;
	term * arr;
}poly;

void init_poly(poly *p, int size);
void append(poly *p, int coeff, int power);
void display(poly *p);
poly add_poly(poly *p, poly *q);
poly sub_poly(poly *p, poly *q);
