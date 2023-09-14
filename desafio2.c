#include <stdio.h>
//programa que imprime a soma de todos os números de 1 até 100
int main(void)
{
  int soma = 1;
  for (int i=1; i<=99; i++)
  {
    int numero = i + 1;
    soma = soma + numero;
  }
  printf("%d", soma);
}
