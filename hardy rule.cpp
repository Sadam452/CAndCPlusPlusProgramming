// C program to implement Hardy's Rule
// on the given function

#include <math.h>
#include <stdio.h>

// In order to represent the implementation,
// a function f(x) = 1/(1 + x) is considered
// in this program

// Function to return the value of f(x)
// for the given value of x
float y(float x)
{
	return (1 / (1 + x*x));
}

// Function to computes the integrand of y
// at the given intervals of x with
// step size h and the initial limit a
// and final limit b
float Hardyrule(float a, float b)
{
	// Number of intervals

	int n = 6;
	int h;

	// Computing the step size
	h = ((b - a) / n);
	float sum = 0;

	// Substituing a = 0, b = 4 and h = 1
	float hl = (28* y(a) + 162 * y(a + h)

				+ 220 * y(a + 3 * h)
				+ 162* y(a + 5 * h)
				+28* y(a + 6*h))*h/100
				;

	sum = sum + hl;
	return sum;
}

// Driver code
int main()
{
	float lowlimit = 0;
	float upplimit = 6;
	printf("f(x) = %.4f",
		Hardyrule(0, 6));
	return 0;
}

