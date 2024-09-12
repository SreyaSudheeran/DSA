#include <stdio.h>

int main() {
	char ch;    
	scanf("%c", &ch);/*inputs the character*/
	if (ch >= 'A' && ch <= 'Z') {
		printf("%c is an uppercase alphabet.\n", ch);
	} 
	else if (ch >= 'a' && ch <= 'z') {
		printf("%c is a lowercase alphabet.\n", ch);
	} 
	else {
		printf("%c is not an alphabet.\n", ch);
	}
    
	return 0;
}

