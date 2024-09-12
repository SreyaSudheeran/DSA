#include <stdio.h>

int main() {
	int units;
	float total, surcharge = 0.20;
	float rate1 = 0.50, rate2 = 0.75, rate3 = 1.20, rate4 = 1.50;
	scanf("%d", &units);
	if (units <= 50) {
		total = units * rate1;
	} 
	else if (units <= 150) {
		total = 50 * rate1 + (units - 50) * rate2;
	} 
	else if (units <= 250) {
		total = 50 * rate1 + 100 * rate2 + (units - 150) * rate3;
	} 
	else {
		total = 50 * rate1 + 100 * rate2 + 100 * rate3 + (units - 250) * rate4;
	}
	total += surcharge * total;
	printf("Total electricity bill = Rs. %.2f\n", total);

	return 0;
}

