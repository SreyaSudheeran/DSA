#include <stdio.h>
#define SIZE 10

int main() {
	int val;
	int arr[SIZE];
	int arrn[SIZE];
    
	printf("Enter length of Array: ");
	scanf("%d", &val);
    
	printf("Enter Array: ");
	for(int i = 0; i < val; i++) {
		scanf("%d", &arr[i]);
	}
    
	/* Create a reversed array */
	for(int i = 0, j = val - 1; i < val; i++, j--) {
		arrn[i] = arr[j];
	}
	int palindrome = 1;  /* Assume it's a palindrome initially */
	for(int i = 0; i < val; i++) {
		if(arr[i] != arrn[i]) {
			palindrome = 0;  /*Not a palindrome */
			break;
		}
	}
    
	if(palindrome) {
		printf("Palindrome.\n");
	} 
	else {
		printf("Not a palindrome.\n");
	}
    
	return 0;
}

