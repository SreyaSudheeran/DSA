#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include <limits.h>
#include <time.h>

void menu() {
	printf("Menu:\n");
	printf("1. Initialize arrays\n");
	printf("2. Display arrays\n");
	printf("3. Append to arrays\n");
	printf("4. Insert into array B\n");
	printf("5. Remove from array A\n");
	printf("6. Find min and max\n");
	printf("7. Reverse an array\n");
	printf("8. Merge arrays\n");
	printf("9. Exit\n");
}

int main() {
	array a, b;
	int choice, value, pos;
	int size = 10;
	init(&a, size);	/*Initialised two arrays */
	init(&b, size);
	while (1) {
		menu();
		printf("Enter your choice: ");
		scanf("%d", &choice); /*Input from user for thier choice*/

		switch (choice) {
			case 1:
				init(&a, size);
				init(&b, size);
				printf("Arrays initialized.\n"); /*initialises both the arrays*/
				break;

			case 2:
				printf("Array A: ");
				display(a);
				printf("Array B: ");
				display(b);
				break;

			case 3:
				printf("Enter value to append to Array A: ");/*appends in both the array*/
				scanf("%d", &value);
				append(&a, value);
				printf("Enter value to append to Array B: ");
				scanf("%d", &value);
				append(&b, value);
				break;

			case 4:
				printf("Enter position and value to insert into Array B: ");/*inserts at the postion in array B*/
				scanf("%d %d", &pos, &value);
				insert(&b, pos, value);
				break;

			case 5:
				printf("Enter position to remove from Array A: "); /*removes at the postion in array A*/
				scanf("%d", &pos);
				remove_at_pos(&a, pos);
				break;

			case 6:
				min(a); /*prints min and max of both arrays */
				max(a);
				min(b);
				max(b);
				break;

			case 7:
				printf("Array A reversed\n");/*reverse array A */
				reverse(&a);
				break;

			case 8:
				printf("Array A and B merged\n");/*merges array A and B*/
				merge(a, b);
				break;

			case 9:
				free(a.A); /*freed both the arrays*/
				free(b.A);
				return 0;

			default:
				printf("Invalid choice. Please try again.\n");
		}
	}

	return 0;
}

