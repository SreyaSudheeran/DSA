#include <stdio.h>

int main() {
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	if ((num % 5 == 0) && (num % 6 == 0)) {
		printf("Is %d divisible by 5 and 6? true\n", num);
	} 
	else {
		printf("Is %d divisible by 5 and 6? false\n", num);
	}
	if ((num % 5 == 0) || (num % 6 == 0)) {
		printf("Is %d divisible by 5 or 6? true\n", num);
	} 
	else {
		printf("Is %d divisible by 5 or 6? false\n", num);
	}
	if ((num % 5 == 0) != (num % 6 == 0)) {
		printf("Is %d divisible by 5 or 6, but not both? true\n", num);
	} 
	else {
		printf("Is %d divisible by 5 or 6, but not both? false\n", num);
	}
	return 0;
}

