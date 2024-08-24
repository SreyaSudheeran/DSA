#include <stdio.h>
#include <stdlib.h>
#include "ascii.h"

int main(){
	ASCII L1;
	char ch;
	init_ASCII(&L1);
	scanf("%c",&ch); /* Input the character from the user */
	ASCII_of(ch, &L1);
	traverse(L1);
	destroy(&L1);
	traverse(L1);
	return 0;
}
