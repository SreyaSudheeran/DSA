#include <stdio.h>
#include <ctype.h> /*to use tolower */

int main() {
	char ch;
	int vowel;

	scanf("%c", &ch); /*inputs the character*/

	if (isalpha(ch)) { /*checks if it is a vowel or not*/
		ch = tolower(ch);
		vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
		if (vowel) {
			printf("%c is a vowel.\n", ch);
		} 
		else {
			printf("%c is a consonant.\n", ch);
		}
	} 
	else {
		printf("%c is not an alphabet.\n", ch);
	}
    
	return 0;
}

