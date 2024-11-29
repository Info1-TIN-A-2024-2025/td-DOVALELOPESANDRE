#include <stdio.h>

int main(int argc, const char *argv[])
{
#if 0
	const double k = .621371; // km to miles
	//display k :
	printf("k = %lf\n", k);
	// update k
		//k = 1.3 * k; // => genère une erreur.
#endif
#if 0
	double x = 3; // x double, 3 int ==> transtypage automatique de 3 en 3.0 (implicite)
	int y = 3.5; // transtypage automatique de 3.5 en 3 (implicite) : perte de la partie décimale, pas d'arrondi
	
	double z = 3.5;
	int t = (int) z; // transtypage explicite : perte de la partie décimale, pas d'arrondi : z reste inchangé.


#endif

#if 0
	short sh = 0x03E8;
	short *p = &sh; // p contient l'adresse d'une variable de type short;

	printf("sh = %d\n", sh);
	printf("&sh = %p\n", &sh);
	printf("p = %p\n", p);

	//contenu vu à l'adresse p :
	printf("*p = %d\n", *p);

	// &variable => adresse de la variable
	// *pointeur => contenu vu à l'adresse stockée dans p
#endif
#if 0
	int x = 10;
	int y = 20;
	int z = 30;
	int t = 40;
	int ret = 0; // check return scanf

	printf("Entrez les valeur de [x] [y] [z] [t] : ");
	ret = scanf("%d %d %d %d", &x, &y, &z, &t);
	//display
	printf("ret = %d, x = %d, y = %d, z = %d, t = %d\n", ret, x, y, z, t);

#endif
#if 0
	int x = 10;
	int y = 20;
	int z = 30;
	int t = 40;
	int ret = 0; // check return scanf

	printf("Entrez la valeur de [x] : ");
	ret = scanf("%d", &x);
	printf("Entrez la valeur de [y] : ");
	ret += scanf("%d", &y);
	printf("Entrez la valeur de [z] : ");
	ret += scanf("%d", &z);
	printf("Entrez la valeur de [t] : ");
	ret += scanf("%d", &t);
	if(ret != 4){
		puts("wrong number of values");
	}
	//display
	printf("ret = %d, x = %d, y = %d, z = %d, t = %d\n", ret, x, y, z, t);
#endif
#if 0
	//saisie d'une valeur entière
	//affichage si valeur paire ou impaire

	int n = 0;
	int ret = 0;
	printf("Number of cats : ");
	ret = scanf("%d", &n);


	printf("%d cat%s\n", n, n<2 ? "" : "s");
#endif
#if 1
	//passage par valeur
	int q = 10;
	f(q); // f(10) -> dans f, la variable 1 est inconnue; f ne peut pas modifier q.

	// passage par adresse:
	int r = 10;
	g(&r); // g(adresse de la variable r); -> dans g, l'adresse de la variable r est connue,
		   // g peut modifier r;

#endif
	return 0;
}	