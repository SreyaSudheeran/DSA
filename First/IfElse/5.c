#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year); /*inputs the year*/
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { /*Checks if the year is leap or not*/
		printf("leap year\n");
	} 
	else {
		printf("not a leap year\n");
	}
	return 0;
}

