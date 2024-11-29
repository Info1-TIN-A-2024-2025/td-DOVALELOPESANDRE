#include <stdio.h>
#include <math.h>

void cart_to_polar(double r, double i, double *m, double *a);


int main(int argc, const char *argv[])
{
	double real = 1.;
	double img = 2.;
	double module = 0.;
	double argument = 0.;

	//printf("Address of real = %p\n", &real);
	//printf("Address of img = %p\n", &img);

	cart_to_polar(real, img, &module, &argument);

	printf("Module = %lf\n", module);
	printf("Argument = %lf\n", argument);

	printf("Polar form : %lf(cos(%lf) + jsin(%lf))\n", argument, module, module);

	//--------------------------------------------------------------------------------//


	return 0;
}

void cart_to_polar(double r, double i, double *m, double *a){ // peut etre un int (ou autre) si on veut traiter des errerus ou renvoyer qqch de générique 
	//printf("%lf\n", r);
	//printf("%lf\n", i);
	//printf("%p\n", m);
	//printf("%p\n", a);

	double module_value = sqrt(r * r + i * i);
	double arg_value = acos(r / module_value);

	*m = module_value;
	*a = arg_value;

	return;
}