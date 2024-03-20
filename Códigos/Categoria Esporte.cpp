#include <stdio.h>
#include <stdlib.h>

main()
{
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 5 && idade <= 7)
    {
        printf("\nInfantil A");
    }
    if(idade >= 8 && idade <= 10)
    {
        printf("\nInfantil B");
    }
    if(idade >= 11 && idade <= 13)
    {
        printf("\nJuvenil A");
    }
    if(idade >= 14 && idade <= 17)
    {
        printf("\nJuvenil B");
    }
    if(idade >= 18)
    {
        printf("\nAdulto");
    }
}

