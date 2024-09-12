#include <stdio.h>
#include <math.h> /*to use pow function*/

int main() {
	float principal, rate, time;
	float simpleInterest, compoundInterest;
	scanf("%f", &principal);
	scanf("%f", &rate);
	scanf("%f", &time);
	simpleInterest = (principal * rate * time) / 100.0;
	float amount = principal * pow((1 + rate / 100.0), time);
	compoundInterest = amount - principal;
	printf("Simple Interest: %.2f\n", simpleInterest);
	printf("Compound Interest: %.2f\n", compoundInterest);
	return 0;
}

