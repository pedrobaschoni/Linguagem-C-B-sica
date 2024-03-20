#include <stdio.h>
#include <stdlib.h>

main()
{
	int num;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	if(num%2 == 0)
	{
		printf("\nO numero informado e par!");
	}
	else
	{
		printf("\nO numero informado e impar!");
	}
}
