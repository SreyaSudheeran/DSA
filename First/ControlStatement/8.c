#include <stdio.h>

int main() {
	char item[100][100];
	int quantity[100];
	float price[100], amount[100];
	int n;
	printf("Enter the number of items: ");
	scanf("%d", &n);
	float totalAmount = 0.0;
	for (int i = 0; i < n; i++) {
		printf("Enter item %d:\n", i + 1);
		printf("Item name: ");
		scanf(" %[^\n]s", item[i]);
		printf("Quantity: ");
		scanf("%d", &quantity[i]);
		printf("Price: ");
		scanf("%f", &price[i]);
		amount[i] = quantity[i] * price[i];
		totalAmount += amount[i];
	}
	printf("\n*** Bill ***\n");
	printf("Item        Quantity  Price   Amount\n");
	for (int i = 0; i < n; i++) {
		printf("%-10s %-8d %-7.2f %-7.2f\n", item[i], quantity[i], price[i], amount[i]);
	}
	printf("Total Amount: %.2f\n", totalAmount);
	return 0;
}

