#include <stdio.h>
#include <stdlib.h>

main()
{
	float sal, total, nsal;
	
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	
	if(sal >= 1500)
	{
		total = sal * 0.10;
		nsal = sal + total;
		
		printf("\nSeu novo salario: %f", nsal);
	}
	else
	{
		total = sal * 0.15;
		nsal = sal + total;
		
		printf("\nSeu novo salario: %f", nsal);
	}
}
