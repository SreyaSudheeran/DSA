#include <stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	for (int i = 0; i < 10; i++){
		scanf("%d",&arr[i]); /*takes input from the user */
	}
	for (int i = 9; i > -1; i--){
		printf("%d| ",arr[i]); /*prints the array in reverse order*/
	}
	printf("\n");
}
