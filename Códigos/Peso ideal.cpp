#include <stdio.h>
#include <stdlib.h>

main()
{
	int sexo;
	float altura, total;
	
	printf("1 - Homem");
	printf("\n2 - Mulher");
	printf("\n\nInforme o seu sexo: ");
	scanf("%d", &sexo);
	printf("\nInforme sua altura: ");
	scanf("%f", &altura);
	
	if(sexo == 1)
	{
		total = (72.7 * altura) - 58;
		
		printf("\nSeu peso ideal e: %f", total);
	}
	else
	{
		total = (62.1 * altura) - 44.7;
		
		printf("\nSeu peso ideal e: %f", total);
	}
}
