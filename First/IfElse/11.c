#include <stdio.h>

int main() {
	float angle1, angle2, angle3;
	scanf("%f", &angle1); /*input angles*/
	scanf("%f", &angle2);
	scanf("%f", &angle3);
	if (angle1 + angle2 + angle3 == 180.0) {
		printf("The angles form a valid triangle.\n");
	} 
	else {
		printf("The angles do not form a valid triangle.\n");
	}
    
	return 0;
}

