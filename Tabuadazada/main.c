#include <stdio.h>
#include <stdlib.h>

int main()
{
    char escolha = 'S';
    int numero;
    printf("\n =====Tabuadazada===== \n");

    while(escolha != 'N'){

        printf("Deseja ver uma tabuada? [S ou N]\nResposta: ");
        scanf("%c", &escolha);

        if(escolha == 'S'){
            printf("\nTabuada de: ");
            scanf("%i", &numero);


            for(int a=1; a<=10; a++){
                printf("%i x %i = %i\n", numero, a, numero*a);
        }

        }
    }
return 0;
}
