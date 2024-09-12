#include <stdio.h>
#include "polynomial.h"
#include <stdlib.h>

/* Initializes the polynomial */
void init_poly(poly*p,int size){
	p->size = size;
	p->arr = (term *)(malloc(sizeof(term)*size));
	p->len = 0;
}

/* Appends a term to the polynomial */
void append(poly *p, int coeff, int power) {
	int i;
	for (i = 0; i < p->len; i++) {
		if (p->arr[i].power == power) {
			p->arr[i].coeff += coeff;
			if (p->arr[i].coeff == 0) {  /* Shift elements to remove zero coefficient term */
				for (int j = i; j < p->len - 1; j++) {
					p->arr[j] = p->arr[j + 1];
				}
				p->len--;
			}
			return;
		}
	}
	if (p->len >= p->size) {
		return;
	}
	p->arr[p->len].coeff = coeff; 
	p->arr[p->len].power = power;
	p->len++;
}

/* Displays the polynomial */
void display(poly *p) {
	if (p->len == 0) {
		printf("0");
		return;
	}
	for (int i = 0; i < p->len; i++) {
		if (i > 0 && p->arr[i].coeff > 0) {
			printf(" + ");
		}
		if (p->arr[i].power == 0) {
			printf("%d", p->arr[i].coeff);
		} 
		else {
			printf("%dx^%d", p->arr[i].coeff, p->arr[i].power);
		}
	}
	printf("\n");
}

/* Adds two polynomials */
poly add_poly(poly *p, poly *q) {
	poly result; /*poynomial result */
	init_poly(&result, p->size + q->size);    
	int i = 0, j = 0;
	while (i < p->len && j < q->len) {
		if (p->arr[i].power == q->arr[j].power) { /*Matches the power for addition */
			append(&result, p->arr[i].coeff + q->arr[j].coeff, p->arr[i].power); /*Appends into result */
			i++;
			j++;
		} 
		else if (p->arr[i].power > q->arr[j].power) { /*Appends into result */
			append(&result, p->arr[i].coeff, p->arr[i].power);
			i++;
		} 
		else { 						/*Appends into result */
			append(&result, q->arr[j].coeff, q->arr[j].power);
			j++;
		}
	}
	while (i < p->len) {
		append(&result, p->arr[i].coeff, p->arr[i].power);/*Appends into result */
		i++;
	}
	while (j < q->len) {
		append(&result, q->arr[j].coeff, q->arr[j].power);/*Appends into result */
		j++;
	}  
	return result; /*Returns the answer polynomial*/
}

/* Subtracts one polynomial from another */
poly sub_poly(poly *p, poly *q) {
	poly result; /*poynomial result */
	init_poly(&result, p->size + q->size);    
	int i = 0, j = 0;
	while (i < p->len && j < q->len) {
		if (p->arr[i].power == q->arr[j].power) { /*Matches the power for subtraction */
			append(&result, p->arr[i].coeff - q->arr[j].coeff, p->arr[i].power); /*Appends into result */
			i++;
			j++;
		} 
		else if (p->arr[i].power > q->arr[j].power) {
			append(&result, p->arr[i].coeff, p->arr[i].power); /*Appends into result */
			i++;
		} 
		else {
			append(&result, -q->arr[j].coeff, q->arr[j].power); /*Appends into result */
			j++;
		}
	}   
	while (i < p->len) {
		append(&result, p->arr[i].coeff, p->arr[i].power);/*Appends into result */
		i++;
	}
    
	while (j < q->len) {
		append(&result, -q->arr[j].coeff, q->arr[j].power);/*Appends into result */
		j++;
	}    
	return result;/*Returns the answer polynomial*/
}
