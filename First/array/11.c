#include <stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	int val;
	int var;
	scanf("%d",&val);
	for (int i = 0; i < val; i ++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0, j = val - 1; i < j ; i ++ , j--){
		var = arr[i]; /*swaping the contents */
		arr[i] = arr[j];
		arr[j] = var;
	}
	for(int i = 0; i < val; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
