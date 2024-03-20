#include <stdio.h>
#include <stdlib.h>

main()
{
	int dias;
	float diaria, gasto, por, totalt, totalp, total;
	
	printf("Quanto custa a diaria do hotel: ");
	scanf("%f", &diaria);
	printf("\nQuantos dias o cliente se hospedou: ");
	scanf("%d", &dias);
	printf("\nQuanto foi gasto com bebidas e comidas do cliente: ");
	scanf("%f", &gasto);
	printf("\nQual a porcentagem de desconto dada: ");
	scanf("%f", &por);
	
	totalt = (diaria * dias) + gasto;
	por = por / 100;
	totalp = totalt * por;
	total = totalt - totalp;
	
	printf("\nTotal a ser pago: %f", totalt);
	printf("\nDesconto: %f", totalp);
	printf("\nValor final com o desconto: %f", total);
}
