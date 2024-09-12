#include <stdio.h>

int main() {
	float num1, num2;
	int sum;
	scanf("%f", &num1);
	scanf("%f", &num2);
	sum = (int)(num1 + num2);  
	printf("%.2f\n", num1);
	printf("%.2f\n", num2);
	printf("%d\n", sum);   
	return 0;
}

