#include <stdio.h>

int main() {
	char item[100];
	float price;
	int delivery;
	float shipping;
	float total;
	printf("Enter the item : ");
	scanf(" %[^\n]", item);
	printf("Enter the price : ");
	scanf("%f", &price);
	printf("Overnight delivery (0==no, 1==yes): ");
	scanf("%d", &delivery);
	if (price < 100) {
		shipping = 20.00;
	} 
	else {
		shipping = 30.00;
	}
	if (delivery == 1) {
		shipping += 50.00;
	}
	total= price + shipping;
	printf("Invoice: %s Rs.%.2f shipping Rs.%.2f total Rs. %.2f\n", item, price, shipping, total);    
	return 0;
}

