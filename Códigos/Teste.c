#include <stdio.h>
#include <stdlib.h>


main()
{
	float valor, valor2, total;
	
	system("color 5");
	printf("Informe um numero: ");
	scanf("%f", &valor);
	printf("\nInforme um segundo numero: ");
	scanf("%f", &valor2);
	
	total = valor + valor2;
	
	printf("\nA soma dos numeros vale: %f", total);
}

