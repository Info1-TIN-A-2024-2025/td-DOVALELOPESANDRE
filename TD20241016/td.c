#include <stdio.h>
#include <math.h>
#define M_Pi 3.14159265358979323846

int main(int argc, const char *argv[])
{
	int n = 1000;
	
	//nombre de digits en base 10 :
	unsigned char count = (int)(log10(n))+1;
	printf("Voici le nombre de digits de la variable n en base 10: %u\n\n", count);

	//nombre de digits en base 2 : 
	count = (int)(log2(n)) + 1;
	printf("Voici le nombre de digits de la variable n en base 2: %u\n\n", count);

	count = (int)(log10(n) / log10(16)) + 1;
	printf("Voici le nombre de digits de la variable n en base 16: %u\n\n", count);

	float a = 0;
	printf("Entrez la valeur de l'angle en degrés :");
	scanf("%f", &a);

	float rad = a * M_Pi / 180;

	float sinus = sin(rad);
	float cosinus = cos(rad);
	float tangante = tan(rad);
	float divide_sincos = sinus / cosinus;
	float subtract = tangante - divide_sincos;

	printf("sinus = %.6f\ncosinus = %.6f\ntangante = %.6f\nsinus/cosinus = %.6f\ntangante - (sinus/cosinus) = %.10e\n", sinus, cosinus, tangante, divide_sincos, subtract);
	return 0;
}