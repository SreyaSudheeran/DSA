#include <stdio.h>
#include <limits.h>
#define SIZE 10

int main() {
	int arr[SIZE];
	int len;
	int value;
	int great = INT_MAX; /* Initialize to largest possible value */
	int greatv = -1;
	int less = INT_MAX; /* Initialize to the largest possible value */
	int lessv = -1; 
	printf("Enter the value to compare: ");
	scanf("%d", &value);
	printf("Enter the number of elements in the array: ");
	scanf("%d", &len);
	if (len > SIZE) { /*Handles overflow*/
		printf("Array size exceeds maximum allowed size\n");
		return 0;
	}
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < len; i++) { /* Find the nearest greater and lesser elements*/
		int diff = arr[i] - value;   
		if (diff > 0) { 
			if (diff < great) { 
				great = diff;
				greatv = arr[i];
			}
		} 
		else if (diff < 0) { 
			int absDiff = -diff; 
			if (absDiff < less) {
				less = absDiff;
				lessv = arr[i];
			}
		}
	}
	if (greatv != -1) {
		printf("%d\n", greatv);
	} 
	else {
		printf("No greater element found.\n");
	}
    
	if (lessv != -1) {
		printf("%d\n", lessv);
	} 
	else {
		printf("No lesser element found.\n");
	}
	return 0;
}
