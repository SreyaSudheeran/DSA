#include <stdio.h>

int main() {
	float physics, chemistry, biology, mathematics, computer;
	float total_marks, percentage;
	char grade;
	scanf("%f", &physics);/*inputs the marks of subjects*/
	scanf("%f", &chemistry);
	scanf("%f", &biology);
	scanf("%f", &mathematics);
	scanf("%f", &computer);
	total_marks = physics + chemistry + biology + mathematics + computer;
	percentage = (total_marks / 500.0) * 100.0;/*calculates percentage*/
	if (percentage >= 90.0) {
		grade = 'A';
	} 
	else if (percentage >= 80.0) {
		grade = 'B';
	} 
	else if (percentage >= 70.0) {
		grade = 'C';
	} 
	else if (percentage >= 60.0) {
		grade = 'D';
	} 
	else if (percentage >= 40.0) {
		grade = 'E';
	} 
	else {
		grade = 'F';
	}
	printf("Percentage : %.2f%%\n", percentage);
	printf("Grade : %c\n", grade);

	return 0;
}

