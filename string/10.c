#include <stdio.h>
#include <ctype.h>  
#include <string.h> 

/* Checks if a string contains only digits */
int digits(char *str) {
	while (*str) {
		if (!isdigit(*str)) { /* Check if the current character is a digit  or not*/
			return 0; 
		}
		str++;
	}
	return 1;
}

int string_to_int(char *str) {
	int ans = 0;
	while (*str) {
		ans = ans * 10 + (*str - '0');  /* Convert the current character to its integer value and update result */
		str++;
	}
	return ans;
}

int main() {
	char input[100];
	scanf("%s", input);
	if (digits(input)) {
		int ans = string_to_int(input);
		printf("%d\n", ans); /* Print the answer */
	} else {
		printf("The string does not contain only digits.\n");
	}
	return 0;
}

