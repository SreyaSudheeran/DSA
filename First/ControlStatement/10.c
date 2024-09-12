#include <stdio.h>

int main() {
	float num;
	printf("Enter a floating-point value: ");
	scanf("%f", &num);
	printf("Value entered: %.6f\n", num); 
	printf("Value in exponent form : %.2e\n", num);
	printf("Value in exponent form : %.4e\n", num);
	printf("Value in exponent form : %.8e\n", num);
	return 0;
}

