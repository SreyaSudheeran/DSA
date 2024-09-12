#include <stdio.h>

int main() {
	int c;
	int count = 0;
	while ((c = getchar()) != EOF) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') { /*counts the number of vowels */
			count++;
		}
	}
	printf("\nNumber of vowels: %d\n", count);
	return 0;
}

