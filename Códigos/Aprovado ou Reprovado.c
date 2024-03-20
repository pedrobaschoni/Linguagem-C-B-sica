#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota1, nota2, nota3, total;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nInforme a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nInforme a terceira nota: ");
	scanf("%f", &nota3);
	
	total = (nota1 + nota2 + nota3) / 3;
	
	if(total >= 6)
	{
		printf("\nAprovado");
	}
	else
	{
		printf("\nReprovado");
	}
}
