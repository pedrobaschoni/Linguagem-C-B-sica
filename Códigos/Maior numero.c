#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1, num2;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nInforme o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	{
		printf("\nMaior numero informado: %d", num1);
	}
	else
	{
		printf("\nMaior numero informado: %d", num2);
	}
}

