#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * binary(int num){
	if (num == 0) {
		char *ans = (char *)malloc(2 * sizeof(char));
		if (ans == NULL) {
			return NULL;   /* Check if memory allocation failed */
		}
		ans[0] = '0';
		ans[1] = '\0';
		return ans;
	}
	char arr[120]; /* Temporary array to hold binary digits in reverse order */
	int i = 0;
	while(num > 0){ 
		arr[i++] = (num % 2) + '0';
		num = num /2;
	}
	char * ans = (char *)(malloc(sizeof(char)*(i+1)));
	if (ans == NULL) {
			return NULL;   /* Check if memory allocation failed */
	}
	for(int j = i - 1, k = 0; j >= 0; j--, k++){ /* Reverse the binary digits to get the correct order */
		ans[k] = arr[j];
	}
	ans[i] ='\0'; /* Null terminator for the string */
	return ans; /* Return the binary string */
}

int main(){
	int a = 10;
	printf("%s",binary(a)); /* Print the binary representation */
	printf("\n");
	return 0;
}
