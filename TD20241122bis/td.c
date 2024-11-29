#include <stdio.h>

void min_max(char a, char b, char *mi, char *ma);

int main(int argc, const char *argv[])
{
	char c1 = 'A';
	char c2 = 'Z';
	char min_c1_c2 = 0;
	char max_c1_c2 = 0;

	min_max(c1, c2, &min_c1_c2, &max_c1_c2);

	printf("C1 = %d\n", c1);
	printf("C2 = %d\n", c2);
	printf("Min = %d\n", min_c1_c2);
	printf("Max = %d\n", max_c1_c2);
	return 0;
}

void min_max(const char a, const char b, char *mi, char *ma){
	*mi = a <= b ? a : b;
	*ma = a >= b ? a : b;

	return;
}