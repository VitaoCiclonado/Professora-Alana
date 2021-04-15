#include <stdio.h>
#include <stdlib.h>

int main()
{
   int maximo, minimo, contagem = 0;

    printf("Digite um valor maximo: ");
    scanf("%i",&maximo);

    printf("Digite agora o valor minimo: ");
    scanf("%i",&minimo);

    if(minimo > maximo){
        contagem = minimo;
        minimo = maximo;
        maximo = contagem;

        printf("Os valores foram invertidos!\n\n");

    }

    while(minimo <= maximo){
    if(maximo%5 == 0){
        printf("%i\n",maximo);
        maximo--;
    }else{
        maximo--;
    }

    }

}
