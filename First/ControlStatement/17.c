#include <stdio.h>
#include <math.h>

int digits(int num) {
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}

int armstrong(int num) {
	int originalNum = num;
	int numDigit = digits(num);
	int sum = 0;
    
	while (num != 0) {
		int digit = num % 10;
		sum += pow(digit, numDigit);
		num /= 10;
	}
    
	return (sum == originalNum);
}

int main() {
	int number;
	while ((scanf("%d", &number)) != -1){
		if (armstrong(number)) {
			printf("%d is an Armstrong number.\n", number);
		} else {
			printf("%d is not an Armstrong number.\n", number);
		}
	}
    
	return 0;
}

