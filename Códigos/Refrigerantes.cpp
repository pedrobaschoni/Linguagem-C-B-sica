#include <stdio.h>
#include <stdlib.h>

main()
{
	int gp, gm, gg;
	float tp, tm, tg, total;
	
	printf("Quantas guarrafas de 350ml deseja: ");
	scanf("%d", &gp);
	printf("\nQuantas guarrafas de 600ml deseja: ");
	scanf("%d", &gm);
	printf("\nQuantas guarrafas de 2L deseja: ");
	scanf("%d", &gg);
	
	tp = gp * 0.350;
	tm = gm * 0.600;
	tg = gg * 2;
	total = tp + tm + tg;
	
	printf("\nTotal de litros comprados: %f", total);
}
