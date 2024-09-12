#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num); /*inputs number*/
	if (num % 2 == 0) { /*checks if odd or even */
		printf("%d is even.\n", num);
	} 
	else {
		printf("%d is odd.\n", num);
	}
	return 0;
}

