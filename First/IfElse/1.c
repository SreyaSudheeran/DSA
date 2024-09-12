#include <stdio.h>
int main() {
	int num1, num2, max;
	scanf("%d", &num1);/*inputs the two numbers*/
	scanf("%d", &num2);
	if (num1 > num2) { /*updates the max variable with the greater value among the two*/
		max = num1;
	} 
	else {
		max = num2;
	}
	printf("%d\n", max);/*prints the maximum number*/
	return 0;
}

