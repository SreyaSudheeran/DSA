#include <stdio.h>
#include <ctype.h> /*to use isalpha */

int main() {
	char ch;
	scanf("%c", &ch);/*inputs the character*/
	if (isalpha(ch)) { /*checks if it is a alphabet or not*/
		printf("%c is an alphabet.\n", ch);
	} 
	else {
		printf("%c is not an alphabet.\n", ch);
	}
    
	return 0;
}

