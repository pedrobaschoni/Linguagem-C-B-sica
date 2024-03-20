#include <stdio.h>
#include <stdlib.h>

main()
{
	float sal, vendas, com;
	
	printf("Qual o seu salario: ");
	scanf("%f", &sal);
	printf("\nQual o valor das vendas: ");
	scanf("%f", &vendas);
	
	vendas = vendas * 0.04;
	com = sal + vendas;
	
	printf("\nSua comissao foi: %f", vendas);
	printf("\nSeu salario final foi: %f", com);
}
