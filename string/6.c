#include <stdio.h>
#include <stdbool.h> /*to use bool */

bool check_delimiter(char c, char *delim) { /*helper function for strsep */
	while (*delim) {
		if (c == *delim) {
			return 1;
		}
		delim++;
	}
	return 0;
}

int strcasecmp(char *s1, char *s2) {
	while (*s1 && *s2) {  /* Convert characters to lowercase */
		char c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1; 
		char c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
		if (c1 != c2) {
			return c1 - c2; /* Return the difference if they are not equal */
		}
		s1++;
		s2++;
	}
	return (*s1) - (*s2);
}

char *strsep(char **stringp, char *delim) {
	char *start = *stringp;
	if (start == NULL) {
		return NULL;
	}
    
	char *end = start;
	while (*end && !check_delimiter(*end, delim)) {
		end++;
	}

	if (*end) {  /* If a delimiter was found, replace it with a null character */
		*end = '\0';
		*stringp = end + 1;
	} 
	else {
		*stringp = NULL;
	}

	return start; /* Return the start of the answer */
}

int strcoll(char *s1, char *s2) {
	while (*s1 && *s2) {
		if (*s1 != *s2) {
			return *s1 - *s2; /* Return the difference */
		}
		s1++;
		s2++;
	}
	return (*s1) - (*s2);
}

int main() {
	/*strcasecmp function */
	char *s1 = "Sreya";
	char *s2 = "sReya";
	int res = strcasecmp(s1, s2);
	if (res == 0) {
		printf("The strings are equal.\n");
	} 
	else if (res < 0) {
		printf("The first string is less than the second string.\n");
	} 
	else {
		printf("The first string is greater than the second string .\n");
	}
	/*strsep function */
	char str[] = "one,two,three";
	char *delim = ",";
	char *ans;
	char *rest = str;
	while ((ans = strsep(&rest, delim)) != NULL) {
		printf("%s\n", ans);
	}
	/*strcoll function */
	char *s3 = "Hello";
	char *s4 = "World";
	res = strcoll(s3, s4);
	if (res == 0) {
		printf("The strings are equal.\n");
	} 
	else if (res < 0) {
		printf("The first string is less than the second string.\n");
	} 
	else {
		printf("The first string is greater than the second string.\n");
	}
	return 0;
}

