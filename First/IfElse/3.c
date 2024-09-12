#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num); /*inputs number*/
	if (num % 5 == 0 && num % 11 == 0) { /*checks if number is divisible by both or bot */
		printf("%d is divisible by both 5 and 11.\n", num);
	}
	else {
		printf("%d is not divisible by both 5 and 11.\n", num);
	} 
	return 0;
}

