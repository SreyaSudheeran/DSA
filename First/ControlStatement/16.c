#include <stdio.h>

int prime(int num) {
	if (num <= 1) {
		return 0;
	}

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
		return 0;
		}
	}
    
	return 1; 
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if (m < 2) {
		m = 2;
	}
	for (int i = m; i <= n; i++) {
		if (prime(i)) {
		printf("%d\n", i);
		}
	}
    
	return 0;
}

