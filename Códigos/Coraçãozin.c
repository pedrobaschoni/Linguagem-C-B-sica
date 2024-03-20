#include <stdio.h>
#include <stdlib.h>

main()
{
	int idade;
	float total, conta;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	conta = 60 * 60 * 24 * 365.25;
	total = idade * conta;
	
	printf("\Seu coração ja bateu: %f vezes", total);
}
