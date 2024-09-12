#include <stdio.h>

int main() {
	float side1, side2, side3;
	scanf("%f", &side1);/*inputs the sides of triangles*/
	scanf("%f", &side2);
	scanf("%f", &side3);
	if (side1 == side2 && side2 == side3) {
		printf("Triangle is an equilateral triangle.\n");
	} 
	else if (side1 == side2 || side1 == side3 || side2 == side3) {
		printf("Triangle is an isosceles triangle.\n");
	} 
	else {
		printf("Triangle is a scalene triangle.\n");
	}

	return 0;
}

