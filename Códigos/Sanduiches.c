#include <stdio.h>
#include <stdlib.h>

main()
{
	int totals; 
	float pre, que, ham;
	
	printf("Qual a quantidade de sanduiches que deseja: ");
	scanf("%d", &totals);
	
	pre = 50 * totals;
	que = 100 * totals;
	ham = 100 * totals;
	
	printf("\nPresunto gasto: %f gramas", pre);
	printf("\nQueijo gasto: %f gramas", que);
	printf("\nHamburguer gasto: %f gramas", ham);
}
