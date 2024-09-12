#include <stdio.h>

int gcd(int a, int b) { /*GCD function to help find LCM */
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}   
	return a;
}

int lcm(int a, int b){
	if (a < 0) { /* If a or b is negative, return -1 to indicate an error */
		return -1;
	}
	if (b < 0) {
		return -1;
	}
	int ans = a * b;
	ans = ans / gcd(a,b); /* Divide the product by the GCD to get the LCM */
	return ans; /* Return the LCM */
} 

int main() {
	int a = 10;
	int b = 8;
	printf("%d\n",lcm(a, b)); /* Print the result */
	return 0;
}

