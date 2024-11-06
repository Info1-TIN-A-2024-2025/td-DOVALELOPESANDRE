#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{	
	double i = 0;
	#if 0
	do {
		printf("Saisir une valeur entière supérieure à 0 : ");
		int retour = scanf("%d", &i);
		if (retour != 1){
			while (getchar() != '\n');
			/*
			do {
			} while (getchar() != '\n');
			*/
		}
	} while (!(i > 0));

	printf("i = %d\n", i);
	#endif

	for ( i = 0; i <= 5; i++){
		printf("i = %lf\n", i);
	}
	puts("-------------------------------");

	const double x_start = 0;
	const double x_end = 2 * M_PI;
	const double A = 4;
	const int N = 13;
	double x = 0;
	for (x = x_start; x <= x_end; x += ((x_end-x_start)/(N-1)))
	{
		printf("Sin(%lf) = %6.4lf\n", x, A*sin(x));
	}

	return 0;
}