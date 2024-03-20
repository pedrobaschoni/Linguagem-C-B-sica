#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

void reset()
{
	int a = 0;
	
	for(a = 0; a<= 3000000000; a++)
	{
		if(a == 3000000000)
		{
			system("cls");
		}
	}
}

main()
{
	float op, val1, val2, total, op2, op3;
	
	system("color 5");
	printf("**************************************************\n");   
	printf("***      Programa de calculos matematicos      ***\n");
	printf("**************************************************\n"); 
	printf("\nOpcoes de calculos: ");
	printf("\n\n1 - Soma");
	printf("\n2 - Subtracao");
	printf("\n3 - Multiplicacao");
	printf("\n4 - Dividir");
	printf("\n5 - Elevado a 2");
	printf("\n6 - Lei de Ohm");
	printf("\n7 - Potencia");
	
	printf("\n\nInforme qual calculo deseja realizar: ");
	scanf("%f", &op);
	
	if(op == 1)
	{
		system("color b");
		printf("\n\nInforme o primeiro numero: ");
		scanf("%f", &val1);
		printf("\nInforme o segundo numero: ");
		scanf("%f", &val2);
		
		total = val1 + val2;
		
		printf("\nO resultado da soma foi: %f\n\n\n", total);
		reset();
		main();
	}
	
	if(op == 2)
	{
		system("color a");
		printf("\n\nInforme o primeiro numero: ");
		scanf("%f", &val1);
		printf("\nInforme o segundo numero: ");
		scanf("%f", &val2);
		
		total = val1 - val2;
		
		printf("\nO resultado da subtracao foi: %f\n\n\n", total);
		reset();
		main();
	}
	
	if(op == 3)
	{
		system("color d");
		printf("\n\nInforme o primeiro numero: ");
		scanf("%f", &val1);
		printf("\nInforme o segundo numero: ");
		scanf("%f", &val2);
		
		total = val1 * val2;
		
		printf("\nO resultado da multiplicacao foi: %f\n\n\n", total);
		reset();
		main();
	}
	
	if(op == 4)
	{
		system("color b");
		printf("\n\nInforme o primeiro numero: ");
		scanf("%f", &val1);
		printf("\nInforme o segundo numero: ");
		scanf("%f", &val2);
		
		total = val1 / val2;
		
		printf("\nO resultado da divisao foi: %f\n\n\n", total);
		reset();
		main();
	}

	if(op == 5)
	{
		system("color c");
		printf("\n\nInforme o numero que deseja elevar a 2: ");
		scanf("%f", &val1);
		
		total = val1 * val1;
		
		printf("\nO resultado da conta foi: %f\n\n\n", total);
		reset();
		main();
	}
	
	if(op == 6)
	{
		system("color 3");
		printf("\n\nOpcoes de calculos: ");
		printf("\n\n1 - Resistencia");
		printf("\n2 - Voltagem");
		printf("\n3 - Corrente");
		printf("\n\nQual das opcoes voce nao possui para realizar a conta: ");
		scanf("%f", &op2);
		
		if(op2 == 1)
		{
			system("color e");
			printf("\n\nInforme a Voltagem: ");
			scanf("%f", &val1);
			printf("\nInforme a Corrente: ");
			scanf("%f", &val2);
			
			total = val1 / val2;
			
			printf("\nA Resistencia encontrada foi: %f\n\n\n", total);
		}
		if(op2 == 2)
		{
			system("color f");
			printf("\n\nInforme a Resistencia: ");
			scanf("%f", &val1);
			printf("\nInforme a Corrente: ");
			scanf("%f", &val2);
			
			total = val1 * val2;
			
			printf("\nA Voltagem encontrada foi: %f\n\n\n", total);
		}
		if(op2 == 3)
		{
			system("color 1");
			printf("\n\nInforme a Voltagem: ");
			scanf("%f", &val1);
			printf("\nInforme a Resistencia: ");
			scanf("%f", &val2);
			
			total = val1 / val2;
			
			printf("\nA Resistencia encontrada foi: %f\n\n\n", total);
		}
		if(!(op2 == 1) && (op2 ==2) && (op2 == 3))
		{
			system("color 4");
			printf("\nNumero invalido, ler faz bem!\n\n\n");
			reset();
			main();
		}
		reset();
		main();
	}
	
	if(op == 7)
	{
		system("color 4");
		printf("\n\nOpcoes de calculos: ");
		printf("\n\n1 - Resistencia");
		printf("\n2 - Voltagem");
		printf("\n3 - Corrente");
		printf("\n\nQual das opcoes voce nao possui para realizar a conta: ");
		scanf("%f", &op3);
		
		if(op3 == 1)
		{
			system("color 9");
			printf("\n\nInforme a Voltagem: ");
			scanf("%f", &val1);
			printf("\nInforme a Corrente: ");
			scanf("%f", &val2);
			
			total = val1 * val2;
			
			printf("\nA Potencia encontrada foi: %f\n\n\n", total);
		}
		if(op3 == 2)
		{
			system("color 2");
			printf("\n\nInforme a Resistencia: ");
			scanf("%f", &val1);
			printf("\nInforme a Corrente: ");
			scanf("%f", &val2);
			
			total = val1 * (val2 * val2);
			
			printf("\nA Potencia encontrada foi: %f\n\n\n", total);
		}
		if(op3 == 3)
		{
			system("color d");
			printf("\n\nInforme a Voltagem: ");
			scanf("%f", &val1);
			printf("\nInforme a Resistencia: ");
			scanf("%f", &val2);
			
			total = (val1 * val1) / val2;
			
			printf("\nA Potencia encontrada foi: %f\n\n\n", total);
		}
		if(!(op3 == 1) && (op3 ==2) && (op3 == 3))
		{
			system("color 4");
			printf("\nNumero invalido, ler faz bem!\n\n\n");
			reset();
			main();
		}
		reset();
		main();
	}
	else
	{
		system("color 4");
		printf("\nNumero invalido, ler faz bem!\n\n\n");
		reset();
		main();
	}
}

