#include <stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	int ans = 0;
	for (int i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < 10; i++){
		ans=ans+(arr[i]*arr[i]); /*updates ans variable for the desired result*/
	}
	printf("%d\n",ans);
}
