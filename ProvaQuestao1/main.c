#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  int num1, num2, contador = 0;

  setlocale(LC_ALL, "Portuguese");

  do {
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num2);
  } while (num2 <= 0);

  for (num1 = 1; num1 <= num2; num1++) {
    if (num2 % num1 == 0) {
     contador++;
    }
  }

  if (contador == 2)
    printf("O número %d é primo!", num2);
  else
    printf("O número %d não é primo!", num2);


  return 0;
}
