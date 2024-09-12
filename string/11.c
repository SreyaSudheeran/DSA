#include <stdio.h>
#include <string.h>

void rev(char *str) {
	if (str == NULL) 
		return;
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		char temp = str[i];  /* Swap characters at positions i and j */
		str[i] = str[j];
		str[j] = temp;
	}
}

int main() {
	char str[] = "Hello World";
	printf("%s\n", str);
	rev(str);
	printf("%s\n", str);
	return 0;
}

