#include <stdio.h>

int main() {
	char ch;
	while ((ch = getchar()) != '*') {
	    	while (getchar() != '\n');
		printf("Character entered: %c\n", ch);
		printf("ASCII value: %d\n", ch);
		if (ch >= 'a' && ch <= 'z') {
			printf("Uppercase conversion: %c\n", ch - 32);
		} else if (ch >= 'A' && ch <= 'Z') {
			printf("Lowercase conversion: %c\n", ch + 32);
		}
	}
	return 0;
}

