#include <stdio.h>
#include <stdlib.h>
#include "ascii.h"

/* Initialize the ASCII list*/
void init_ASCII(ASCII * L){ 
	L->front = NULL;
	L->rear = NULL;
}

/* Convert a character to its ASCII value and store it in a doubly linked list */
void ASCII_of(char ch, ASCII *l){
	int i = (int) ch;
	 /* Create the first node and store the last digit*/
	node * nn = (node *)(malloc(sizeof(node)));
	if(nn){
		nn->prev = NULL;
		nn->next = NULL;
		nn->data = i%10;
		i = i/10;
	}
	else{
		return;  /* Exit if memory allocation fails */
	}
	l -> rear = nn; /* Set the rear to the first node */
	while(i){
		node * n1 = (node *)(malloc(sizeof(node)));
		if(n1){
			n1->prev = NULL;
			n1->next = nn;
			n1->data = i%10;
		}
		else{
			return; /* Exit if memory allocation fails */
		}		
		nn->prev = n1;
		nn = n1; 
		i = i / 10;
	}
	l -> front = nn; /* Set the front to the new first node */
}

/* Print the data of each node */
void traverse(ASCII L){
	node *p = L.front;
	while(p){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return;
}

/* Free all nodes in the ASCII list and destroy the list */
void destroy(ASCII * L){
	node * p = L->front;
	/* Free all the nodes */
	while(p){
		node * q = p;
		p = p ->next;
		free(q);
	}
	L->front = NULL; /* Reset the front pointer */
	L->rear = NULL; /* Reset the rear pointer */
}
