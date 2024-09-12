#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include <limits.h>
#include <time.h>

/*Initialises the array*/
void init(array * a, int size){
	a -> size = size;
	a ->A = (int *) malloc (sizeof(int)*size);
	if (a->A == NULL) { 	/*If memory allocation fails*/
		return;
	}
	a->len = 0;
	srand(time(NULL)); 	/*To seed the random generator */
	/*Fill randomly four elements in array */
	for (int i = 0; i < 4 && i < size; i++) {
		a->A[i] = rand() % 100; 	/*Random number between 0 and 99*/
		a->len++;
	}
}

/*Appends value into the array */
void append(array * a, int val){
	if(a->len == a->size){	 /*handels overflow */
		return;
	}
	else{
		a -> A[a->len++] = val;	 /*insert val in the last position of the array*/
	}
}

/*Inserts the given value into the array in a specific position*/
void insert (array * a, int pos, int val){
	if(pos>= a->len || pos < 0|| a->len == a->size){ 	/*handels overflow */
		return;
	}
	else{
		for(int i = a ->len - 1; i >= pos; i--){ 	/*makes space for the new element to be inserted */
			a->A[i+1] = a->A[i];
		}
		a -> A[pos] = val;
		a->len ++;
	} 
}

/*Removes the element in the array in a specific position*/
void remove_at_pos(array * a, int pos){
	if(pos>= a->len || pos < 0){ 	/*handels overflow */
		return;
	}
	else{
		for(int i = pos; i < a ->len - 1; i++){  /*shifts the remaining elements of array after removing the element */
			a->A[i] = a->A[i+1];
		}
		a->len --;
	} 
}

/*Displays the content of array*/
void display(array a){
	for(int i = 0; i < a.len; i++){	/*loop runs till all the element are displayed*/
		printf("%d ",a.A[i]);
	}
	printf("\n");
}

/*Displays the maximum number in array*/
void max(array a){
	int max = INT_MIN;
	for(int i = 0; i < a.len; i++){	
		if(a.A[i]>max){		/*updates the max variable if element is greater than the previous element*/
			max = a.A[i];
		}
	}
	printf("%d\n",max);
}

/*Displays the minimum number in array*/
void min(array a){
	int min = INT_MAX;
	for(int i = 0; i < a.len; i++){
		if(a.A[i]<min){		/*updates the min variable if element is smaller than the previous element*/
			min = a.A[i];
		}
	}
	printf("%d\n",min);
}

/*Make the array in reverse order*/
void reverse(array * a){
	int left = 0;
	int right = a->len - 1;
	int temp = 0;
	while(left <= right){	/*swaps the elements till right is greater than left */
		temp = a->A[left];
		a->A[left] = a->A[right];
		a->A[right] = temp;
		left ++;
		right --;
	}

}

/*Merges two array and displays the array */
void merge(array a, array b){
	array c; /*Initialises the result array*/
	init(&c,a.size + b.size);
	int len = 0;
	for (int i =0; i< a.len; i++){ /*copies contents of array A */
		c.A[len++] = a.A[i];
	}
	for (int i =0; i< b.len; i++){
		c.A[len++] = b.A[i];  /*copies contents of array B */
	}
	c.len = len;
	display(c); /*Displays the result array*/
	free(c.A);/*free the pointer*/
}
