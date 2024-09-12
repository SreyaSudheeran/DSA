#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);/*inputs the number*/
	if (num > 0) {     /*conditions to be checked*/
		printf("positive.\n");
	}
	else if (num < 0) {
		printf("negative.\n");
	} 
	else {
		printf("The number is zero.\n");
	}
	return 0;
}

