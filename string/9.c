#include <stdio.h>

int reverse_integer(int num) {
	int reverse = 0;
	while (num != 0) {
		int digit = num % 10;  /* Last digit of number */
		reverse = reverse * 10 + digit; 
		num /= 10; /* Remove the last digit from the number */
	}
	return reverse;
}

int main() {
	int number;
	scanf("%d", &number);
	int r_number = reverse_integer(number);
	printf("%d\n", r_number);
	return 0;
}

