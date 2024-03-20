#include <stdio.h>
#include <stdlib.h>

main()
{
	int natms, cims, coms, natacao, ciclismo, corrida, provasegun, horas, minutos, segundos, sobra;
	
	printf("Informe os m/s da natacao: ");
	scanf("%d", &natms);
	printf("Informe os m/s da ciclismo: ");
	scanf("%d", &cims);
	printf("Informe os m/s da corrida: ");
	scanf("%d", &coms);
	
	natacao = 1500 / natms;
	ciclismo = 40000 / cims;
	corrida = 10000 / coms;
	provasegun = natacao + ciclismo + corrida + 70 + 40;
	horas = provasegun / 3600;
	sobra = provasegun % 3600;
    minutos = sobra / 60;
    segundos = sobra % 60;
	
	printf("\nTempo da natacao em segundos: %d segundos", natacao);
	printf("\nTempo do ciclismo em segundos: %d segundos", ciclismo);
	printf("\nTempo da corrida em segundos: %d segundos", corrida);
	printf("\nTempo desde o inicio da prova ate o final do ciclismo em segundos: %d segundos", provasegun);
	printf("\nTempo total da prova: %d horas %d minutos e %d segundos", horas,minutos,segundos);
}

