#include <stdio.h>
int count(char *s, char ch){
	int count = 0;
	while(*s != '\0'){
		if(*s == ch){
			count++;
		}
		s++;
	}
	return count;
}

int main(){
	char * s = "I am Sreya";
	char ch = 'a';
	printf("%d\n",count(s,ch));
	return 0;
}
