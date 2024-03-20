#include <stdio.h>
#include <stdlib.h>

main()
{
	int amg1, amg2, valtotal;
	float total, cent, amg3;
	
	printf("Informe o valor total da conta: ");
	scanf("%f", &total);
	
	total = total / 3;
	valtotal = total;
	cent = total - valtotal;
	amg1 = total;
	amg2 = total;
	amg3 = total + cent * 2;
	
	printf("\nO primeiro amigo pagara: %d", amg1);
	printf("\nO segundo amigo pagara: %d", amg2);
	printf("\nO terceiro amigo pagara: %f", amg3);
}

