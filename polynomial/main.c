#include <stdio.h>
#include "polynomial.h"
#include <stdlib.h>

int main() {
	poly p1, p2, result;

	/* Initialize the polynomials */
	init_poly(&p1, 10);
	init_poly(&p2, 10);

	/* Append to add terms to the polynomials */
	append(&p1, 3, 2); /* Add term 3x^2 to p1 */
	append(&p1, 4, 1); /* Add term 4x^1 to p1 */
	append(&p2, 5, 2); /* Add term 5x^2 to p2 */
	append(&p2, 6, 0); /* Add term 6 to p2 */

	/* Display both the polynomials */
	printf("Polynomial p1: ");
	display(&p1);
	printf("Polynomial p2: ");
	display(&p2);

	/* Addition of the polynomials */
	result = add_poly(&p1, &p2);
	printf("Sum : ");
	display(&result);

	/* Free result polynomial */
	free(result.arr);

	/* Subtractraction of p2 from p1 */
	result = sub_poly(&p1, &p2);
	printf("Difference : ");
	display(&result);

	/* Free the result polynomial */
	free(result.arr);

	/* Free the polynomials p1 and p2 */
	free(p1.arr);
	free(p2.arr);
	return 0;
}

