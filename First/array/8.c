#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(){
	srand(time(NULL));
	int c = 10;
	int arr[SIZE];
	for(int i = 0; i < c; i++){
		arr[i] = rand() % 50+ 50; /*generate numbers between 50 and 100*/
	} 
	for(int i = 0; i < c; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
