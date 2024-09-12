#include <stdio.h>
#include <string.h> /*to import string realted functions like strcmp */

/*Q1. all structures*/
typedef struct {
	int day;
	int month;
	int year;
} DOB;

typedef struct {
	float english;
	float mathematics;
	float ComputerScience;
} Marks;

typedef struct {
	char first_name[50];
	char middle_name[50];
	char last_name[50];
} Name;

typedef struct {
	int roll_number;
	Name name;
	char gender;
	DOB dob;
	Marks marks;
} Student;

typedef struct {
	char name[50];
	char address[100];
	char grade;
	int number_of_rooms;
	float room_charges;
} Hotel;

typedef struct {
	int hr;
	int min;
	int sec;
} Time;

typedef struct {
	int numerator;
	int denominator;
} Fraction;

typedef struct {
	int day;
	int month;
	int year;
} Date;

/*Q2. Function to display student details based on name*/
void display(Student students[], int num, char search_name[]) {
	int found = 0;
	float total, avg;
	for (int i = 0; i < num; i++) {
		if (strcmp(students[i].name.first_name, search_name) == 0) {
			found = 1;
			total = students[i].marks.english + students[i].marks.mathematics + students[i].marks.ComputerScience;
			avg= total/ 3;
			printf("Roll Number: %d\n", students[i].roll_number);
			printf("Name: %s %s %s\n", students[i].name.first_name, students[i].name.middle_name, students[i].name.last_name);
			printf("Gender: %c\n", students[i].gender);
			printf("Date of Birth: %02d-%02d-%04d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
			printf("Marks: English = %.2f, Mathematics = %.2f, Computer Science = %.2f\n", students[i].marks.english, students[i].marks.mathematics, students[i].marks.ComputerScience);
			printf("Average Marks: %.2f\n", avg);
			printf("\n");
		}
	}
	if (!found) {
		printf("No student found with the name %s\n", search_name);
	}
}
/*Q2. Function to display student details who has average marks less than 40*/
void display_less_than_40(Student students[], int num) {
	int found = 0;
	float total, avg;
	for (int i = 0; i < num; i++) {
		total = students[i].marks.english + students[i].marks.mathematics + students[i].marks.ComputerScience;
		avg = total / 3;
		if (avg < 40) {
			found = 1;
			printf("Roll Number: %d\n", students[i].roll_number);
			printf("Name: %s %s %s\n", students[i].name.first_name, students[i].name.middle_name, students[i].name.last_name);
			printf("Gender: %c\n", students[i].gender);
			printf("Date of Birth: %02d-%02d-%04d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
			printf("Marks: English = %.2f, Mathematics = %.2f, Computer Science = %.2f\n", students[i].marks.english, students[i].marks.mathematics, students[i].marks.ComputerScience);
			printf("Average Marks: %.2f\n", avg);
			printf("\n");
		}
	}
	if (!found) {
		printf("No student has less than 40%%\n");
	}
}
/*Q2. Function to display student average marks*/
void display_average(Student students[], int num) {
	int found = 0;
	float total, avg;
	for (int i = 0; i < num; i++) {
		total = students[i].marks.english + students[i].marks.mathematics + students[i].marks.ComputerScience;
		avg = total / 3;
			found = 1;
			printf("Name: %s %s %s\n", students[i].name.first_name, students[i].name.middle_name, students[i].name.last_name);
			printf("Average Marks: %.2f\n", avg);
			printf("\n");
	}
	if (!found) {
		printf("No student has less than 40%%\n");
	}
}
/* Q3. Function to print hotel names by grade */
void display_Hotels_Grade(Hotel hotels[], int num, char grade) {
	printf("Hotels with grade %c:\n", grade);
	for (int i = 0; i < num; i++) {
		if (hotels[i].grade == grade) {
			printf("%s\n", hotels[i].name);
		}
	}
}

/* Q3. Function to print hotel names with room charges less than specified value */
void display_Hotels_Charge(Hotel hotels[], int num, float max) {
	printf("Hotels with room charges less than %.2f:\n", max);
	for (int i = 0; i < num; i++) {
		if (hotels[i].room_charges < max) {
			printf("%s\n", hotels[i].name);
		}
	}
}

/*  Q4. Function to check time difference */
void countTime(Time start_time, Time end_time) {
	/* To see that start time is less than end time */
	while (start_time.hr < end_time.hr || (start_time.hr == end_time.hr && start_time.min < end_time.min) || (start_time.hr == end_time.hr && start_time.min == end_time.min && start_time.sec < end_time.sec)) {
		printf("GOOD DAY\n");
		start_time.sec++;
		if (start_time.sec == 60) {
			start_time.sec = 0;
			start_time.min++;
			if (start_time.min == 60) {
				start_time.min = 0;
				start_time.hr++;
			}
		}
	}
}

/* Q5. Function to compare two fractions */
int compareFractions(Fraction f1, Fraction f2) {
	/* Convert fractions into decimals */
	float value1 = (float)f1.numerator / f1.denominator;
	float value2 = (float)f2.numerator / f2.denominator;
	if (value1 < value2) {
		return -1;
	}
	if (value1 > value2) {
		return 1;
	}
	return 0;
}

/* Q6. Helps the validate function */
int isLeap(int year) {
	if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
		return 1;
	}
	return 0;
}
/* Q6. Function to validate a date */
int validate(Date date) {
	if (date.year < 1) {
		return 0;
	}
	if (date.month < 1 || date.month > 12) {
		return 0;
	}
	if (date.day < 1) {
		return 0;
	}
	int DaysMonth[] = {31, (isLeap(date.year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (date.day > DaysMonth[date.month - 1]) {
		return 0;
	}
	return 1;
}

/*  Q7. Function to add and subtract time */
void add_and_subtract_time(Time t1, Time t2) {
	Time sum, difference;    
	/* Adding time */
	sum.hr = t1.hr + t2.hr;
	sum.min = t1.min + t2.min;
	sum.sec = t1.sec + t2.sec;
	if (sum.sec >= 60) {
		sum.sec -= 60;
		sum.min++;
	}
	if (sum.min >= 60) {
		sum.min -= 60;
		sum.hr++;
	}

	/* Subtracting time */
	difference.hr = t1.hr - t2.hr;
	difference.min = t1.min - t2.min;
	difference.sec = t1.sec - t2.sec;
	if (difference.sec < 0) {
		difference.sec += 60;
		difference.min--;
	}
	if (difference.min < 0) {
		difference.min += 60;
		difference.hr--;
	}

	printf("Sum of times: %d:%d:%d\n", sum.hr, sum.min, sum.sec);
	printf("Difference of times: %d:%d:%d\n", difference.hr, difference.min, difference.sec);
}

int main() {
	/*  Q1. Example data */
	Student students[3] = {
		{1, {"Aryan", "Raj", "Patil"}, 'M', {3, 4, 2004}, {67.0, 55.0, 81.0}},
		{2, {"Vaishnavi", "Ramdas", "Singh"}, 'F', {18, 8, 2003}, {75.0, 85.0, 90.0}},
		{3, {"Devanshi", "Dewan", "Pant"}, 'F', {29, 11, 2005}, {35.0, 40.0, 38.0}}
	};

	char search_name[50];
	printf("Enter the first name of the student to search: ");
	scanf("%s", search_name);
	display(students, 3, search_name);
	display_less_than_40(students, 3);
	display_average(students, 3);

	/* Q3. Example data */
	Hotel hotels[3] = {
		{"Keys Hotel", "Pimpri Chinchwad", 'A', 50, 110.0},
		{"Taj Hotel", "Mumbai", 'B', 30, 80.0},
		{"TipTop Hotel", "Pune", 'A', 40, 130.0}
	};

	char grade;
	float val;
	printf("Enter the grade to filter hotels: ");
	scanf(" %c", &grade);
	display_Hotels_Grade(hotels, 3, grade);

	printf("Enter the maximum room charge to filter hotels: ");
	scanf("%f", &val);
	display_Hotels_Charge(hotels, 3, val);

	/* Q4. Counting time */
	Time start_time, end_time;
	printf("Enter start time (hr min sec): ");
	scanf("%d %d %d", &start_time.hr, &start_time.min, &start_time.sec);

	printf("Enter end time (hr min sec): ");
	scanf("%d %d %d", &end_time.hr, &end_time.min, &end_time.sec);

	countTime(start_time, end_time);

	/* Q5. Fraction comparison */
	Fraction f1 = {1, 2};
	Fraction f2 = {3, 4};
	int comparison = compareFractions(f1, f2);
	if (comparison == 0) {
		printf("The fractions are equal.\n");
	} 
	else if (comparison == -1) {
		printf("The first fraction is less than the second.\n");
	} 
	else {
		printf("The first fraction is greater than the second.\n");
	}

	/* Q6. Date validation */
	Date date;
	printf("Enter date (day month year): ");
	scanf("%d %d %d", &date.day, &date.month, &date.year);
	if (validate(date)) {
		printf("The date is valid.\n");
	} 
	else {
		printf("The date is invalid.\n");
	}

	/* Q7. Adding and subtracting times */
	Time t1 = {10, 20, 50};
	Time t2 = {5, 30, 40};
	add_and_subtract_time(t1, t2);
	return 0;
}
