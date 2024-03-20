#include <stdio.h>
#include <stdlib.h>

main()
{
	float kw, sm, totalp, totalpor, kwtotal;
	
	printf("Informe o KW: ");
	scanf("%f", &kw);
	printf("\nQual o salario minimo: ");
	scanf("%f", &sm);
	
	kw = kw / 100;
	sm = sm / 7;
	kwtotal = sm / 100;
	totalp = kw * sm;
	totalpor = totalp * 0.10;
	totalpor = totalp - totalpor;
	
	printf("\nCada KW custa: %f", kwtotal);
	printf("\nValor a ser pago: %f", totalp);
	printf("\nTotal a ser pago com desconto: %f", totalpor);	
}

