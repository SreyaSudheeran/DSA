#include <stdio.h>
#define SIZE 10

int main(){
	int val;
	int arr[SIZE];
	printf("Enter length of Array :"); /*inputs the length of the array */
	scanf("%d",&val);
	printf("Enter Array :");
	for(int i = 0; i < val; i++){ /*inputs the element of the array */
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < val; i++){
		for(int j = i+1; j < val ; j++){ /*removes duplicate elements*/
			if(arr[i] == arr[j]){
				arr[j] = arr[j+1];
				j--;
				val--;
			}
		}
	
	}
	for(int i = 0; i < val; i++){
		printf("%d| ", arr[i]);
	}
	printf("\n");
}
