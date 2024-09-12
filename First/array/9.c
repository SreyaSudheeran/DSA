#include <stdio.h>
#define SIZE 20

int main() {
	int arr[SIZE];
	int pos = 0;
	int neg = 0;
	int even = 0;
	int odd = 0;
	int zero = 0;
	for(int i = 0; i < 20; i++) {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < SIZE; i++) {
		if(arr[i] == 0) {
			zero++;
		}
		else if(arr[i] > 0) {
			pos++;
		}
		else {
			neg++;
		}

		/* Check for even and odd numbers*/
		if(arr[i] != 0) {
			if(arr[i] % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
		}
	}
	/*Displays the result*/
	printf("Zeroes: %d\n", zero);
	printf("Positive numbers: %d\n", pos);
	printf("Negative numbers: %d\n", neg);
	printf("Even numbers: %d\n", even);
	printf("Odd numbers: %d\n", odd);

	return 0;
}

