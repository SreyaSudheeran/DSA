#include <stdio.h>
#include <math.h>
#include <float.h> /* For NAN */

#define PI 3.14
#define MAX 1e-6f /* The number should be more than MIN */

/* Converts degrees to radians */
float deg_to_rad(float degrees) {
	return degrees * PI / 180.0f;
}

/* Calculate sine of an angle (in radians) using Taylor series */
float sine(float x) {
	float term = x; /* First term of Taylor series */
	float sum = term;
	float x_squared = x * x;
	int i = 1;

	while (fabs(term) > MAX) {
		term *= -x_squared / ((2 * i) * (2 * i + 1));
		sum += term;
		i++;
	}

	return sum;
}

/* Calculate cosine of an angle (in radians) using Taylor series */
float cosine(float x) {
	float term = 1.0f; /* First term of Taylor series */
	float sum = term;
	int i = 1;

	while (fabs(term) > MAX) {
		term *= -(x * x)/ ((2 * i - 1) * (2 * i));
		sum += term;
		i++;
	}

	return sum;
}

/* Calculate sine inverse */
float sine_inverse(float x) {
	if (x < -1.0f || x > 1.0f) {
		return NAN; /* Return NAN for out of range values */
	}
	float result = x;
	float term = x;
 	   int i = 1;

	while (fabs(term) > MAX) {
		term *= (2 * i - 1) * (x * x) / (2 * i);
		result += term / (2 * i + 1);
		i++;
	}

	return result;
}

/* Calculate cosine inverse */
float cosine_inverse(float x) {
	return PI / 2 - sine_inverse(x);
}

/* Calculate tan of an angle (in radians) using sine and cosine */
float tangent(float x) {
	return sine(x) / cosine(x);
}

int main() {
	/* sine, cosine, tangent functions */
	float angle_degree = 45.0f; /* Example angle in degrees */
	float angle_radians = deg_to_rad(angle_degree);
	printf("sine(%.2f degrees) = %.6f\n", angle_degree, sine(angle_radians));
	printf("cosine(%.2f degrees) = %.6f\n", angle_degree, cosine(angle_radians));
	printf("tangent(%.2f degrees) = %.6f\n", angle_degree, tangent(angle_radians));
	/* The inverse functions */
	float x = 0.5f; /* Example value within range of -1 to 1 */
	printf("sin-1(%.2f) = %.6f\n", x, sine_inverse(x));
	printf("sine(sin-1(%.2f)) = %.6f\n", x, sine(sine_inverse(x)));
	return 0;
}

