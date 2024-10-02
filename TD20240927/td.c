#include <stdio.h>

int main(int argc, const char *argv[])
{
	double a = 0; // créer une variable A
	double b = 0;
	double c = 0;
	double r = 0;
	/*
	a = 10;
	b = 20;
	c = 0.5;
	*/

	printf("Entrez la valeur de A:");
	scanf("%lf", &a);	// Important de mettre %lf ainsi que &a (emplacement de la variable a en mémoire)

	printf("Entrez la valeur de B:");
	scanf("%lf", &b);

	printf("Entrez la valeur de C:");
	scanf("%lf", &c);

	r = a * b * c;

	printf("%lf\n",r);

	return 0;
}