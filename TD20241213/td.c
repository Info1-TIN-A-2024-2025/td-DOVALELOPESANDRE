#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double generate_random_real_value(const double min_value, const double max_value);
void init_array(double *array, const unsigned int n);

int main(int argc, const char *argv[])
{
	const unsigned int N = 1000000;
	double x[N];
	double moyenne = 0.;
	srand((unsigned int)time(NULL));
#if 0
	for (unsigned int i = 0; i < N; i++){
		x[i] = generate_random_real_value(-40., 42.);
	}
#endif
	init_array(x, N);
	for (unsigned int i = 0; i < N; i++)
	{
		moyenne += x[i];
	}
	printf("Moyenne des valeurs du tableau : %+.5lf\n", moyenne/N);
	return 0;
}

double generate_random_real_value(const double min_value, const double max_value){
  double value = min_value + ((double)rand() / RAND_MAX ) * (max_value - min_value);
  return value;
}

void init_array(double *array, const unsigned int n){
	for (unsigned long index; index < n;index++){
		// array[index] = generate_random_real_value(-40, 42);  // [] ==> notation tableau
		*(array + index) = generate_random_real_value(-40, 42); // *( + ) ==> notation pointeur 
	}
	return;
}