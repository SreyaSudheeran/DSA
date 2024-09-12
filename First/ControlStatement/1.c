#include <stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	for (int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	int a = 0;
	for (int i = 0; i < 10; i = i+3){
		for (int j = 0; j < 2 && a < 9; j++){
			printf("%d,", arr[a]);
			a++;
		}
		printf("%d\n", arr[a]);
		a++;
	}
}
