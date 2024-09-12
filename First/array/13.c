#include <stdio.h>
#define SIZE 10
#define SIZE_1 5
#define SIZE_2 5

int main(){
	int C[SIZE], A[SIZE_1], B[SIZE_2];
	int lena, lenb;
	printf("arr1 ");
	scanf("%d", &lena);
	for (int i = 0; i < lena; i ++){
		scanf("%d", &A[i]);
	}
	printf("arr2 ");
	scanf("%d", &lenb);
	for (int i = 0; i < lenb; i ++){
		scanf("%d", &B[i]);
	}
	int len = lena + lenb;
	int i = 0, j = 0, k = 0;
	while(k < len){ /*sorts the arrays */
		if(A[i] > B[j]){
			C[k] = B[j];
			j++;
			k++;
		}
		else if(A[i] < B[j]){
			C[k] = A[i];
			i++;
			k++;
		}
		else{
			C[k] = A[i];
			i++;
			k++;
		}	
	}
	for (int i = 0; i < len; i ++){
		printf("%d ",C[i]);
	}
	printf("\n");
	return 0;
}
