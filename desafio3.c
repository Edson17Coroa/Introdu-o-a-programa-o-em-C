#include <stdio.h>
//programa que dá a tabuada de 20 do numero digitado
int main(void)
{
  int numero;
  printf("Digite um numero\n");
  scanf("%d", &numero);
  for (int i=1; i<=10; i++)
  {
    int tabuada = numero * i;
    printf("%d x %d = %d\n",numero, i, tabuada);
  }
}
