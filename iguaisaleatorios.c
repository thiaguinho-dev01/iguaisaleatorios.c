#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    int a, b;
    int tentativas = 0;

    do
    {
        a = 1 + rand() % 1000;
        b = 1 + rand() % 1000;
        tentativas++;
    } while (a != b);

    printf("Após %d tentativas, os dois números gerados são iguais a %d\n", tentativas, a);

    printf("Criado por Thiago Bonfanti Guimarães");
}
