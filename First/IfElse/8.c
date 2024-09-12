#include <stdio.h>
#include <ctype.h> /*to use isalpha */

int main() {
	char ch;
	scanf("%c", &ch); /*inputs the character*/
	if (isalpha(ch)) {
		printf("%c is an alphabet.\n", ch);
	}
	else if (isdigit(ch)) {
		printf("%c is a digit.\n", ch);
	}
	else {
		printf("%c is a special character.\n", ch);
	}
    
	return 0;
}

