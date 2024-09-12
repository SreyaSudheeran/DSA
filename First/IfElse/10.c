#include <stdio.h>

int main() {
	int month;
	scanf("%d", &month);/*input the month number*/
	if (month < 1 || month > 12) {
		printf("Please enter a number between 1 and 12.\n");
	} else {
		if (month == 1) {
			printf("January has 31 days.\n");
		} 
		else if (month == 2) {
			printf("February has 28 or 29 days (leap year).\n");
		} 
		else if (month == 3) {
			printf("March has 31 days.\n");
		} 
		else if (month == 4) {
			printf("April has 30 days.\n");
		} 
		else if (month == 5) {
			printf("May has 31 days.\n");
		} 
		else if (month == 6) {
			printf("June has 30 days.\n");
		} 
		else if (month == 7) {
			printf("July has 31 days.\n");
		} 
		else if (month == 8) {
			printf("August has 31 days.\n");
		} 
		else if (month == 9) {
			printf("September has 30 days.\n");
		} 
		else if (month == 10) {
			printf("October has 31 days.\n");
		} 
		else if (month == 11) {
			printf("November has 30 days.\n");
		} 
		else if (month == 12) {
			printf("December has 31 days.\n");
		}
	}

	return 0;
}

