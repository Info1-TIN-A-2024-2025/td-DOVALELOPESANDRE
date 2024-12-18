#include <stdio.h>

int main(int argc, const char *argv[])
{
	unsigned long value = 1;
	scanf("%lu", &value);
	if (value < 1 || value > 1000000){
		return 1;
	}
	printf("%lu ", value);
	while (value > 1) {
		value = value % 2 ? 3 * value + 1 : value / 2;
		printf("%lu ", value);
	}
	puts("");
	return 0;
}