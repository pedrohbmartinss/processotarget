#include <stdio.h>
#include <stdlib.h>

int indice=13, soma = 0, k = 0;

int main()
{
    do 
    {
        k = k + 1;
        soma = soma + k;
        printf("Valor de k: %i Valor da soma: %i\n", k, soma);
    }

    while(k < indice);

    printf("\nA soma foi de %i \n\n", soma);

    system ("pause");


}