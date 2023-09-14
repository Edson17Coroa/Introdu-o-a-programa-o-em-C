#include <stdio.h>
//calculadora
int main(void)
{
  //Introducao e Instrucoes
  printf("*************\n*calculadora*\n*************\n");
  printf("**Instruções**\nPara calcular digite o primeiro numero, depois o segundo e por ultimo digite a operação\n");
  printf("**Lista de Operações**\n (1)Adição; (2)Subtração ;(3)Multiplicação; (4)Divisão\n");
  printf("Digite o primeiro numero\n");
  //Recolha de Dados
  double numero1;
  scanf("%lf", &numero1);
  printf("Digite o segundo numero\n");
  double numero2;
  scanf("%lf", &numero2);
  printf("Digite o numero referente a operação\n");
  int operacao;
  scanf("%d", &operacao);
  double resultado;
  //Geracao de resultados da operacao
  switch (operacao)
  {
      case 1:
            resultado = numero1 + numero2;
            printf("A sua operação foi %.2f + %.2f\nE o resultado é %.2f\n", numero1, numero2, resultado);
            break;
      case 2:
            resultado = numero1 - numero2;
            printf("A sua operação foi %.2f - %.2f\nE o resultado é %.2f\n", numero1, numero2, resultado);
            break;
      case 3:
            resultado = numero1 * numero2;
            printf("A sua operação foi %.2f x %.2f\nE o resultado é %.2f\n", numero1, numero2, resultado);
            break;
      case 4:
            resultado = numero1 / numero2;
            printf("A sua operação foi %.2f / %.2f\nE o resultado é %.2f\n", numero1, numero2, resultado);
            break;
  }
}
