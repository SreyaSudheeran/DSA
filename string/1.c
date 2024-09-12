#include <stdio.h>
#include <stdbool.h> /*to use bool */

bool check_delimiter(char c, const char *delim) { /*checks if the char is a delimiter or not*/
	while (*delim) {
		if (c == *delim) {
			return 1; /*if char found in delim return true*/
		}
		delim++;
	}
	return 0;
}

char *strt(char *s, const char *delim) {
	static char *next = NULL; /*uses static to remember the string until the end of program */
	char *start;
	if (s != NULL) {
		next = s;
	}
	if (next == NULL) {
		return NULL;
	}
	while (*next && check_delimiter(*next, delim)) {  /*skips the initial delimiter if found*/
		next++;
	}
	if (*next == '\0') {
		next = NULL;
		return NULL;
	}
	start = next;
	while (*next && !check_delimiter(*next, delim)) { /*continues if delimeter not found and till string is not over*/
		next++;
	}
	if (*next) {
		*next = '\0';
		next++; 
	} 
	else {
		next = NULL;
	}

	return start; /*returns string*/
}

int main() {
	char str[] = ",Hello, world; I am, Sreya."; /*Example string*/
	char *ans; /*Stores the answer */
	ans = strt(str, ",; ");
	while (ans != NULL) {
		printf("%s\n", ans);
		ans = strt(NULL, ",; ");
	}
	return 0;
}

