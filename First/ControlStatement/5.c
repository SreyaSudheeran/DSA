#include <stdio.h>

int main(){
	float num;
	int ans;
	scanf("%f", &num);
	ans = (int) num;
	int val = ans % 10;	
	printf("%d\n", val);
	return 0;
}
