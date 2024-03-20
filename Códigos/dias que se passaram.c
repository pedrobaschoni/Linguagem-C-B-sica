#include <stdio.h>
#include <stdlib.h>

main()
{
	int dia, mes, totald, totalm, total;
	
	printf("Informe o dia atual: ");
	scanf("%d", &dia);
	printf("\nInforme o mes atual: ");
	scanf("%d", &mes);
	
	totald = 30 - dia;
	totalm = mes * 30;
	total = totalm - totald;
	
	printf("\nDeste o inicio do ano ja se passaram: %d dias", total);
}
