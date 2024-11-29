#include <stdio.h>

int main(int argc, const char *argv[])
{
	#if 0
	char answer = 0;
	puts("Avez-vous correctement révisé les maths (O/N) ?");
	answer = getchar();

 	switch(answer){
		case 'O': case 'Y' : case 'D': case 'E': case 'S':
			puts("OK");
			break;
		
		case 'N': case 'H':
			puts("NG");
			break;																																																																												

		default :
			puts("??");
			break;
		}
	int value = 0;
	const int diviseur = 7;
	puts("Valeurs non divisibles par 7 : ");
	for (value = 1; value <= 42; value++) {
		if ( (value % diviseur) == 0){
			continue;
		}
		printf("|%d", value);
	}
	puts("");
	

	double x;
	int y;

	y = (-1 <= x && x <= 0) || (-1 <= x && x <= 2) ? 0 : 1;
	# endif
	puts("Combien de chats avez-vous ?");
	int NumberOfCats = 0;
	scanf("%d", &NumberOfCats);
	printf("Vous avez %d %s", NumberOfCats, NumberOfCats <= 1 ? 'chats' : 'chat');
	return 0;
}