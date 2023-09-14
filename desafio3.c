#include <stdio.h>

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
