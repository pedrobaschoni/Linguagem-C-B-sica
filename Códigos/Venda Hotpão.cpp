#include <stdio.h>
#include <stdlib.h>

main()
{
	int pao, broas;
	float tp, tb, totalv, pou, por;
	
	printf("Quantos paes foram vendido: ");
	scanf("%d", &pao);
	printf("\nQuntas broas foram vendidas: ");
	scanf("%d", &broas);
	
	tp = pao * 0.6;
	tb = broas * 4.5;
	totalv = tp + tb;
	
	printf("\nTotal de paes vendidos: %f", tp);
	printf("\nTotal de broas vendidos: %f", tb);
	printf("\nTotal vendido: %f", totalv);
	
	printf("\n\nQual o percentual que deseja guardar em sua poupanca: ");
	scanf("%f", &por);
	
	pou = totalv * (por / 100);
	
	printf("\nVoce guardara em sua poupanca um total de: %f", pou);
}
