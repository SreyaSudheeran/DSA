#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int Divisible_by_8_or_15 (int num) {
	return (num % 8 == 0) || (num % 15 == 0);
}

int main() {
	int arr[SIZE];
	int ans[SIZE]; 
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 1000 + 1; /*generate random array*/
	}
	int len = 0; 
	for (int i = 0; i < SIZE; i++) {
		if (Divisible_by_8_or_15(arr[i])) {
			ans[len] = arr[i];
			len++;
		}
	}
	printf("Array:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Numbers divisible by 8 or 15:\n");
	for (int i = 0; i < len; i++) {
		printf("%d ", ans[i]);
	}
	printf("\n");
	return 0;
}

