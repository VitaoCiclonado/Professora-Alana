#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  int num1, num2, contador = 0;

  setlocale(LC_ALL, "Portuguese");

  do {
    printf("Digite um n�mero inteiro e positivo: ");
    scanf("%d", &num2);
  } while (num2 <= 0);

  for (num1 = 1; num1 <= num2; num1++) {
    if (num2 % num1 == 0) {
     contador++;
    }
  }

  if (contador == 2)
    printf("O n�mero %d � primo!", num2);
  else
    printf("O n�mero %d n�o � primo!", num2);


  return 0;
}
