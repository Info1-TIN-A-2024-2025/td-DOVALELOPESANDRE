#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{	
	/*
	if ( argc != 2){
		puts("Heichik pelo tu te la racles sur moi, chab le nombre d'arguments");
		return 1;
	}

	int i = atoi(argv[1]);
	int nbr_div = 0;
	const int divisor = 10;

	while ( i >= divisor ){
		i /= divisor;
		nbr_div++;
	}
	
	
	printf("°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°\n");
	printf("\n");
	printf("Number of divisions by 10 = %d\n", nbr_div);
	printf("\n");
	printf("°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°VV°\n");
	*/

	int UserValue = 0;

	do {
		printf("Entrez une valeur multiple de 3 ou de 5 : ");
		scanf("%d", &UserValue);
	} while (!((UserValue % 5 == 0) || (UserValue % 3 ==0)));

	if (UserValue %3 == 0){
		printf("%d est multiple de 3 (x%d)\n", UserValue, UserValue / 3);
	}
	if (UserValue %5 == 0){
		printf("%d est multiple de 5 (x%d)\n", UserValue, UserValue / 5);
	}

	return 0;
}