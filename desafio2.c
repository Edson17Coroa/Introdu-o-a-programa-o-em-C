#include <stdio.h>

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
