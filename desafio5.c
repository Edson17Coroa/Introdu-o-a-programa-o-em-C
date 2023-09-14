#include <stdio.h>
//calculadora de fatorial
int main(void)
{
  printf("Digite um numero para achar o fatorial\n");
  int numero;
  scanf("%d", &numero);
  for (int i=numero-1; i>=1; i--)
  {
    numero = numero * i;
  }
  printf("O resultado da fatoracao desse numero e %d\n", numero);
}
