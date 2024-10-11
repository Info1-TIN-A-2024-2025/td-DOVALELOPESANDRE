#include <stdint.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	float a = 3.3;
	double b = 2.71828123908731298;
	long double c = 3.1415921237890213793042190834296528715367821;

	char d = 0;
	unsigned char e = 42;
	short f = 1000;
	unsigned short g = 42000;
	long h = 123456;
	unsigned long i = 123456789;

	int j = 0;
	unsigned int k = 927;

	int8_t l = 76;	// #include <stdint.h>

	l = 0;
	printf("l = %d\n", l); // %d ==> base 10, entier

	l = 42;	// base 10
	printf("l = %d\n", l);

	l = 0b00101010;	// binaire	
	printf("l = %d\n", l);

	l = 052; // base 8
	printf("l = %d\n", l);

	l = 0x2A; // hexadécimal
	printf("l = %d\n", l);

	printf("l = %o en base 8\n", l); //afficher l en base 8 
	printf("l = %x en base 16\n", l); //afficher l en base 16
	printf("l = %X en base 16\n", l); //afficher l en base 16
	printf("l = %b en base 2\n", l); //afficher l en base 2

	l = -5;
	printf("l = %d en base 10\n", l); 
	printf("l = %b en base 2\n", l); 


	return 0;
}