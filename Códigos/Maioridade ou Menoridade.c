#include <stdio.h>
#include <stdlib.h>

main()
{
	int ano, idade;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &ano);
	
	idade = 2021 - ano;
	
	if(idade > 18)
	{
		printf("\nMaioridade");
	}
	else
	{
		printf("\nMenoridade");
	}
}
