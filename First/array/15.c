#include <stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	int val;
	int max = 0;
	int max2 = 0;
	scanf("%d", &val);
	if(val == 1 || val == 0){
		printf("no");
		return 0;
	}
	for (int i = 0; i < val; i ++){
		scanf("%d", &arr[i]); /*inputs the array */
	}
	for (int i = 0; i < val ; i ++){
		if(arr[i] > max){  /*compares with max to find the second max */
			max2 = max;
			max = arr[i];
		}
	}
	printf("%d\n", max2);
}
