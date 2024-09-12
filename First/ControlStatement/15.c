#include <stdio.h>

int main() {
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	if (m > n) {
		int temp = m;
		m = n;
		n = temp;
	}
	for (int i = m; i <= n; ++i) {
		if (i % 2 != 0) {
 			printf("%d\n", i);
		}
	}

	    return 0;
}

