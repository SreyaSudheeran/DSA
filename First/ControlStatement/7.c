#include <stdio.h>
#define HRA 0.10  
#define TA 0.05   

int main() {
	float basicPay, salary;
	float hra, ta;
	scanf("%f", &basicPay);
	hra = HRA * basicPay;
	ta = TA * basicPay;
	salary = basicPay + hra + ta;
	printf("Total Salary: %.2f\n", salary);

    return 0;
}

