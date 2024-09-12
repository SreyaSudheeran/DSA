#include <stdio.h>

int main(){
	int even = 0;
	int sum =  0;
	for(int i = 1; i < 201; i++){
		if(i % 2 == 0){ /*sees if the number is even or not */
			even++;
			sum = sum + i;
		}
	} 
	printf("%d %d\n", sum, even);
}
