#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cutonchar(char *str, char ch) {
	char *pos = NULL;
	for (char *p = str; *p != '\0'; p++) {
		if (*p == ch) { 	/* Check if the current character matches */
			pos = p;
			break; 		/* Exit the loop if the character is found */
		}
	}
	if (pos == NULL) {
		char *ans = (char *)malloc(strlen(str) + 1); /* Allocate memory for a copy of the string */
		if (ans == NULL) {
			return NULL;
		}
		strcpy(ans, str);
		return ans;
	}
	int len = pos - str;
	char *ans = (char *)malloc(len + 1); /* Allocate memory for the new string */
	if (ans == NULL) {
		return NULL;
	}
	for (int i = 0; i < len; i++) {
		ans[i] = str[i];
	}
	ans[len] = '\0';
	return ans; /* Return the result string */
} 

int main() {
	char str[] = "something bad"; /*Example string */
	char ch1 = ' ';
	char ch2 = 'e';
	char *result1 = cutonchar(str, ch1);
	if (result1 != NULL) {
		printf("%s\n", result1);
		free(result1); /* Free the allocated memory */
	}

	char *result2 = cutonchar(str, ch2);
	if (result2 != NULL) {
		printf("%s\n", result2);
		free(result2); /* Free the allocated memory */
	}

	return 0;
}

