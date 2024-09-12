#include <stdio.h>
#include <math.h> /*to use sqrt*/

int main() {
	float a, b, c;
	float discriminant, root1, root2, realPart, imaginaryPart; 
	scanf("%f", &a); /*inputs the coefficients*/
	scanf("%f", &b);
	scanf("%f", &c);
	discriminant = b*b - 4*a*c; /*calculates the discriminant*/
	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		printf("%.2f\n", root1);
		printf("%.2f\n", root2);
	} 
	else if (discriminant == 0) {
		root1 = -b / (2*a);
		printf("%.2f\n", root1);
		printf("%.2f\n", root1);
	} 
	else {
		realPart = -b / (2*a);
		imaginaryPart = sqrt(-discriminant) / (2*a);
		printf("%.2f + %.2fi\n", realPart, imaginaryPart);
		printf("%.2f - %.2fi\n", realPart, imaginaryPart);
	}

	return 0;
}

