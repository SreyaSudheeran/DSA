#include <stdio.h>

int main() {
	float num1, num2, num3, sum;
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);
	sum = num1 + num2 + num3;
	printf("%.2f\n", sum);
	return 0;
}

