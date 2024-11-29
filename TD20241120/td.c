#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

// procédure : pas d'entrée, pas de sortie 
void proc(void){
	puts("fonction inutile chef");
	return;
}

// fonction simple : pas d'entrée, une sortie entre 0 et 100
int random(void){
	return rand()%101;
}

// fonction simple : une entrée, une sortie entre 0 et n
int random2(int n){
	return rand()%(n+1);
} 

// fonction simple : deux entrée, une sortie
double min(double x, double y){
	return x < y ? x : y;
}

// fonction simple : une entrée, pas de sortie 
void display_hex(int n){
	printf("%X\n", n);
	return;
}

double mult_by_two(double a) { // a récupère la VALEUR de x
	printf("a = %.2lf\n", a);
	return 2. * a;
}

int main(int argc, const char *argv[])
{
	if (argc != 2){
		puts("Not enough arguments.");
		return 1;
	}

	double x = 0.;
	x = atof(argv[1]);

	double y = 0.;
	y = mult_by_two(x); //passage par valeur

	printf("%.2lf\n", y);
	return 0;
}
