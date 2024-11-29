#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	

	double width = 0;
	int ratio = 0;
	double diameter_rim = 0;
	double distance = atof(argv[2]);
	double diameter_tire = 0;
	double perimeter = 0;
	double nb_wheel_length = 0;

	const double conv_meters = 0.001;
	const double inch_meter = 0.0254;
	const double mm_to_m = 1000;

	sscanf(argv[1], "%lf/%dR%lf", &width, &ratio, &diameter_rim);

	diameter_tire = ((2 * ratio * width * conv_meters) / 100) + (diameter_rim * inch_meter);
	perimeter = 3.1415 * diameter_tire;
	nb_wheel_length = (distance * mm_to_m) / perimeter;

	puts("+---------------------+-------------+");
	printf("| Diameter            | %.2lf cm     |\n", diameter_tire);
	printf("| Perimeter           | %.2lf m      |\n", perimeter);
	printf("| Number of rotations | %.1lf     |\n", nb_wheel_length);
	puts("+---------------------+-------------+");
	return 0;
}