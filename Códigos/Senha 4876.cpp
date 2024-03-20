#include <stdio.h>
#include <stdlib.h>

main()
{
	int senha;
	
	printf("Informe a senha: ");
	scanf("%d", &senha);
	
	if(senha == 4876)
	{
		printf("\nSenha aprovada");
	}
	else
	{
		printf("\nSenha invalida");
	}
}
