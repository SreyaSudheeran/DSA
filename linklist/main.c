#include <stdio.h>
#include <stdlib.h>
#include "link.h"

int main() {
	SLL * L1;
	init(&L1); 
	append(&L1,2);             
	append(&L1,3); 
	append(&L1,4); 
	traverse(L1); 
	insert_at_beg(&L1,2) ;
	traverse(L1); 
	remove_at_pos(&L1,3); 
	traverse(L1);
	len(L1);    
	return 0;

}
