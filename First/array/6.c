#include <stdio.h>

int main(){
	int val;
	int circle;
	printf("Enter length of Array : ");
	scanf("%d",&val);
	int arr[20];
	int arrl[20];
	int arrn[20];
	printf("Enter Array :");
	for(int i = 0; i < val; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i <  val; i++){
		arrl[i] = arr[i];
	}
	printf("Enter the value to be shifted : ");
	scanf("%d",&circle);
	for(int j = 0; j < circle; j++){ /*to right */
		for(int k = 0; k < val-1 ; k++){
			arrn[k+1] = arr[k];
		}
		arrn[0] = arr[val-1];
		for(int i = 0; i < val; i++){
			arr[i]=arrn[i];
		}
	} 
	
	for(int i = 0; i < val; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	for(int j = 0; j < circle; j++){ /*to left */
		for(int k = 1; k < val ; k++){
			arrn[k-1] = arrl[k];
		}
		arrn[val-1] = arrl[0];
		for(int i = 0; i < val; i++){
			arrl[i]=arrn[i];
		}
	} 
	
	for(int i = 0; i < val; i++){
		printf("%d",arrl[i]);
	}
	printf("\n");
	return 0;
}
