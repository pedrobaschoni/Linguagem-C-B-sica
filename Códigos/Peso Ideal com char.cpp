#include <stdio.h>
#include <stdlib.h>

main()
{
    float alt, pim, pih;
    char sx;

    printf("\nInforme sua altura em metros com ponto no lugar ada virgula: ");
    scanf("%f", &alt);
    printf("\nInforme seu genero com M para mulher e H para homem: ");
    scanf("%s", &sx);

    if(sx != 'm' && sx != 'h')
    {
        printf("\nO genero informado é invalido");
    } else {
        if(sx == 'm')
        {
            pim = (62.1 * alt) - 44.7;
            printf("\nO peso ideal para voce como mulher e: %0.2f", pim);
        } else {
            pih = (72.7 * alt) - 58;
            printf("\nO peso ideal para voce como homem e: %0.2f", pih);
        }
    }
}
