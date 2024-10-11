#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, const char *argv[])
{
	printf("Char min : %d and Char Max : %d\n", CHAR_MIN, CHAR_MAX);

	printf("Short min : %d and Short Max : %d\n", SHRT_MIN, SHRT_MAX);

	printf("Float min : %e and Float Max : %e\n", FLT_MIN, FLT_MAX);

	printf("Double min : %le and Double Max : %le\n", DBL_MIN, DBL_MAX);

	printf("\n\n");

	float x = 0;
	x = 1E-40;
	printf("Voici la valeur de x : %.50f\n", x); // %f : 6 digits after decimal point

	double y = 0;
	y = 1E-40;
	printf("Voici la valeur de y : %.50lf\n", y); // %f : 6 digits after decimal point

	printf("\n\n");

#if 0
	int d = 42;
	int r = d / 0; // crash  => test before division 

	printf("Voici la division de d par 0 : %d\n", r);

	double


	double t = 42.;
	double r = t / 0;

	printf("r = %lf\n", r);
	return (0);
#endif

	const double c = 299792458.;
	const double MilesMeter = 1609.344;
	const int num_sec_per_hour = 3600;

	double r = c*num_sec_per_hour/ MilesMeter;

	printf("Speed of light in mph :%.1e\n", r);

	return (0);
}