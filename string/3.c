#include <stdio.h>
int gcd(int a, int b) {
	if (a < 0) { /*can't caculate gcd of negative number */
		return -1;
	}
	if (b < 0) {
		return -1;
	}
	while (b != 0) { /* Apply the Euclidean algorithm to find the GCD */
		int temp = b;
		b = a % b;
		a = temp;
	}   
	return a; /* Return the GCD */
}

int main() {
	int a = 10; /*Example numbers */
	int b = 8;
	printf("%d\n",gcd(a, b)); /* Print the GCD*/
	return 0;
}

