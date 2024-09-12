#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	float arr[50];
	float val;
	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		int val = rand() % 100;
		arr[i] = (float) val;  /* Generate random array elements between 0 and 99 */
	}
	scanf("%f",&val);
	for (int i = 0 ;i < 50; i++){
		if (arr[i] == val){ /* Checks if the value matches the array element */
			printf("Element found at index %d\n",i);
			return 0;
		}	
		else{
			continue;
		}
	}
	printf("Not Found");
	return 0;
}
