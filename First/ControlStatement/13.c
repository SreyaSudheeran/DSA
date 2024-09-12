#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);

	if (ch >= '0' && ch <= '9') {
		printf("Input '%c' is a number.\n", ch);
	}
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		printf("Input '%c' is a character.\n", ch);
		if (ch >= 'a' && ch <= 'z') {
			printf("It is in lowercase.\n");
			printf("Uppercase conversion: %c\n", ch - 32);
		}
		else {
	 		printf("It is in uppercase.\n");
			printf("Lowercase conversion: %c\n", ch + 32);
		}
	}
	else {
		printf("Invalid input: '%c'\n", ch);
	    }
	printf("ASCII value: %d\n", ch);
	return 0;
}

