#include <stdio.h>

int main(void)
{
  printf("Digite 3 numeros para organizalos em ordem crescente\n");
  int a; 
  int b; 
  int c;
  printf("digite o primeiro\n");
  scanf("%d", &a);
  printf("digite o segundo\n");
  scanf("%d", &b);
  printf("digite o terceiro\n");
  scanf("%d", &c);
  if (a<b & b<c || a<b & b==c || a==b & b==c)
  {
    printf("%d, %d, %d\n", a, b, c);
  }
  else if (a<c & c<b || a<c & c==b)
  {
    printf("%d, %d, %d\n", a, c, b);
  }
  else if (b<a & a<c || b<a &a ==c)
  {
    printf("%d, %d, %d\n", b, a, c);
  }
  else if (b<c & c<a)
  {
  printf("%d, %d, %d\n", b, c, a);
  }
  else if (c<a & a<b || c<a & a==b)
  {
    printf("%d, %d, %d\n", c, a, b);
  }
  else if ( c<b & b<a)
  {
    printf("%d, %d, %d\n", c, b, a);
  }
}
