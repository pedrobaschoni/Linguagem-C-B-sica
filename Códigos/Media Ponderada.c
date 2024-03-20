#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota1, nota2, nota3, medp;
	
	printf("Informe a nota da avaliacao bimestral: ");
	scanf("%f", &nota1);
	printf("\nInforme a nota do trabalho prático: ");
	scanf("%f", &nota2);
	printf("\nInforme a nota do simulado: ");
	scanf("%f", &nota3);
	
	medp = ((nota1 * 6) + (nota2 * 2) + (nota3 * 2)) / (2 + 3 + 5);
	nota1 = nota1 * 0.6;
	nota2 = nota2 * 0.2;
	nota3 = nota3 * 0.2;
	
	printf("\nNota da primeira avaliacao: %f", nota1);
	printf("\nNota do trabalho: %f", nota2);
	printf("\nNota do simulado: %f", nota3);
	printf("\nMedia ponderada: %f", medp);
}

