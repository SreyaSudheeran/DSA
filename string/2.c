#include <stdio.h>
#include <string.h>

char * sub(char * s, char * t, int * ans){  /*ans is passed so it is updated in the function itself */
	*ans = 0;
	int c = 0;
	int pos = -1;
	int maxpos = -1;
	int flag = 0;
	for(int i = 0; i < strlen(s) ; i++){ /*Iterates through the entire string */
		int d = i;
		for(int j = 0; j< strlen(t); j++){
			if(s[d]==t[j]){   /* Check if the current character matches */
				if(flag == 0){
					pos = d; /* Set the starting position of the match */
					flag = 1;
				}
				d++;
				c++;
			}
			else if(flag == 1){
				flag = 0;
				break;
			}
		}
		if(c > *ans){
			*ans = c; /* Update the length and start position of the longest substring */
			maxpos = pos;
		}
		c = 0;
	}
	if(maxpos == -1){
		return NULL; /*If not found returns NULL */
	}
	return &s[maxpos]; /* Return a pointer to the start of the longest matching substring */
}

int main(){
	char s[] = "abcdemnopxyzmnot";
	char t[] = "mnoptq";
	int ans; /* Variable to store the length of the longest substring */
	char * a = sub(s,t,&ans);
	for(int i = 0; i< ans; i++){ /* Display the longest substring */
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
