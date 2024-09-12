#include <stdio.h>

int main(){
	int a [] ={60,700,80,900,10};
	for(int i = 0; i <5 ;i++){
		for(int j= 0; j <= i; j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	return 0;
}
