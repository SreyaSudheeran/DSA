#include <stdio.h>
#include <stdlib.h>
#include "link.h"

void init (list * l){
	*l = NULL;
	return;
}

void append(list * l, int data){
	SLL * nn = (SLL *)(malloc(sizeof(SLL)));
	if(nn){
		nn->val = data;
		nn->next = NULL;
	}
	if(*l == NULL){
		*l = nn;
	}
	else{
		SLL * p = *l;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = nn;	
	}
	return;
}

void traverse(list l){
	while(l != NULL){
		printf("%d ",l->val);
		l = l->next;
	}
	printf("\n");
	return;
}

void insert_at_beg(list *l, int data){
	SLL * nn = (SLL *)(malloc(sizeof(SLL)));
	if(nn){
		nn->val = data;
		nn->next = NULL;
	}
	if(*l == NULL){
		*l = nn;
	}
	else{
		nn->next = *l;
		*l = nn;	
	}
	return;
}

void remove_at_pos(list *l, int pos){
	SLL * p = * l;
	int i = 1;
	while(p != NULL){
		if(i==pos){
			break;
		}
		i++;
		p = p->next;
	}
	if(p == NULL){
		return;
	}
	else{
		SLL * q = p->next;
		p->next =  q->next;
		free(q);
	}

}

void len(list l){
	int i = 0;
	while(l != NULL){
		i++;
		l = l->next;
	}
	printf("%d\n",i);
	return;

}
