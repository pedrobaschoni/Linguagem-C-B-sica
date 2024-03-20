#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota1, nota2, nota3, total;
	
	printf("Informe sua nota de laboratorio: ");
	scanf("%f", &nota1);
	printf("\nInforme sua nota da prova parcial: ");
	scanf("%f", &nota2);
	printf("\nInforme sua nota da prova final: ");
	scanf("%f", &nota3);
	
	total = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);
	
	if(total >= 8.01 && total <= 10)
    {
        printf("\nMedia final: %f", total);
        printf("\nAluno A");
    }
    if(total >= 7.01 && total <= 8)
    {
        printf("\nMedia final: %f", total);
        printf("\nAluno B");
    }
    if(total >= 5.01 && total <= 7)
    {
        printf("\nMedia final: %f", total);
        printf("\nAluno C");
    }
    if(total >= 3.01 && total <= 5)
    {
        printf("\nMedia final: %f", total);
        printf("\nAluno D");
    }
    if(total <= 3)
    {
        printf("\nMedia final: %f", total);
        printf("\nAluno E");
    }
}

