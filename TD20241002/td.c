#include <stdio.h>

int main(int argc, const char *argv[])
{
	double u = 0;
	double R = 0;
	double i = 0;

	printf("Enter the voltage [V] : ");
	scanf("%lf", &u);

	printf("Enter the resistance [Ω]: ");
	scanf("%lf", &R);

	if (R <= 0){
		printf("The resistance must be greater than 0 !\n");
		return 1;
	}
	
	i = u / R;
	printf("The current is %.10E [A]\n", i);
	return 0;
}