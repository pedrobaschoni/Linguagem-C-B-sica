#include <stdio.h>
#include <stdlib.h>

main()
{
	int cp, cm, cg, tp, tm, tg;
	float total;
	
	printf("\nQuantas camisetas pequenas deseja: ");
	scanf("%d", &cp);
	printf("\nQuantas camisetas medias deseja: ");
	scanf("%d", &cm);
	printf("\nQuantas camisetas grandes deseja: ");
	scanf("%d", &cg);
	
	tp = cp * 15;
	tm = cm * 22;
	tg = cg * 25;
	total = tp + tm + tg;
	
	printf("\nTotal a pagar pelas camisetas: %f", total);
}
