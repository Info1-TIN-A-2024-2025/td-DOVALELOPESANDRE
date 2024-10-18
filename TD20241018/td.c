#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	#if 0
	printf("argc = %d\n", argc);

	// Test with :
	//	./app						: 1
	//	./app 10 20 				: 3
	//	./app Albert Einstein		: 3
	//	./app "Albert Einstein"		: 2
	//	./app 3.14 2.71828 9		: 4

	// First step : check teh number of arguments.
	// Example labo03 with 3 arguments ex : ./app 10 20
		if(argc != 3){
			printf("Error, wrong number of arguments.\n");
			return 1;
		}

		printf("Arg 1: %s\n", argv[0]);
		printf("Arg 2: %s\n", argv[1]);
		printf("Arg 3: %s\n", argv[2]);

		int i = atoi(argv[1]);
		double x = atof(argv[2]);

		printf("i = %d\n", i);
		printf("x = %lf\n", x);
		#endif

		int number = 42;
		printf(" Number = %u\n", number);
		// ++ operator of post incrementation
		number++;
		printf(" Number = %u\n", number);

		puts("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --");
		number = 57;
		printf(" Number = %u\n", number);
		int j = 0;
		j = number++;

		// j = number
		// number = number + 1

		printf(" j = %u\n", j);
		printf(" Number = %u\n", number);

		puts("-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --");
		number = 57;
		printf(" Number = %u\n", number);
		j = 0;
		j = ++number;

		// j = number
		// number = number + 1

		printf(" j = %u\n", j);
		printf(" Number = %u\n", number);



		return 0;
}