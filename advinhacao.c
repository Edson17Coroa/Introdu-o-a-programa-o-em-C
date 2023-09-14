#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Está tudo em letras maiusculas porque é uma das convenções da linguagem c e sempre ue migrar para outra linguagem devo procurar as suas convenções e lugares para abrir ou fechar chavetas.
#define dificil 5
#define media 10
#define facil 20
#define pontosmax 1000
int main(void)
{
  int iniciar = 1;
    printf("*********************************\n");
    printf("*Bem vindo ao jogo de advinhação*\n");
    printf("*********************************\n");
  while (iniciar)
  {
    //criando rondomização da seed
    int segundos = time(0);
    srand (segundos);
    //criando randomização de numerossecretos
    //variavel que guarda o numero secreto para ser advinhado
    int numerosecreto;
    numerosecreto = rand();
    //fazendo com que o numero gerado esteja entre 0 e 99
    //para isso calculamos o resto da divisao desse numero por 100 porque as propriedades do resto dizem que ele deve ser menor que o divisor(nesse caso 100) e tambem deve ser maior ou igual a 0 e assim tendo um conjunto que engloba o intervalo de 0 a 99
    //e usa-se % para o calculo de resto de uma divisão
    printf ("Escolha o limite para o numero secreto\n limite: ");
    int limite;
    scanf("%d", &limite);
    numerosecreto = numerosecreto %limite++;
    printf ("Escolha  a dificuldade do jogo\n");
    printf("(1)facil, (2)medio, (3)dificil\n\n");
    printf("Escolha: ");
    int dificuldade;
    scanf("%d", &dificuldade);
    int totaltentativas;
    switch (dificuldade)
    {
     case 1: 
            totaltentativas = facil;
            break;
     
     case 2: 
            totaltentativas = media;
            break;
     
     default:
            totaltentativas = dificil;
            break;
    }
    int acertou = 0;
    double pontos = pontosmax;
    int chute;
    int chuteanterior;
    //comecando um loop
    for (int i = 1; i <= totaltentativas; i++)
    {
      //chute e a variavel que guarda o numero digitado
      printf("%dª tentativa\n", i);
      printf("Advinhe o numero\n");
      scanf("%d", &chute);
      
      if (chuteanterior == chute)
      {
        printf("Voce ja digitou esse numero, escolha outro\n");
        i--;
      }
      else
      {
        if (chute < 0)
        {
          printf("Você não pode digitar um numero negativo\n");
          continue;
          i--;
        }
        printf("Você digitou o número %d\n",chute);
        //variavel que define se o player acertou na advinhacao
        acertou = chute == numerosecreto;
        //variavel que define que o chute e maior que o numero secreto
        int maior = chute > numerosecreto;
        if (acertou)
        {
          break;
        }
        else if (maior)
        {
          printf("O numero que voce digitou e maior que o numero secreto\n");
        }
        else 
        {
          printf("o numero que voce digitou e menor que o numero secreto\n");
        }
        double pontosperdidos = abs(chute - numerosecreto)/2.0;
        pontos = pontosmax - pontosperdidos;
      }
      chuteanterior = chute;
    }
    if (acertou)
    {
      printf("Voce acertou\n");
      printf("você ficou com %.2f pontos\n Pressione (1) para jogar novamente e (0) para terminar\n", pontos);
    }
    else
    {
      printf("Parabens, voce perdeu miseravelmente!!\n Pressione (1) para tentar novamente e (0) para terminar\n");
    }
    scanf("%d", &iniciar);
    if (!iniciar)
    {
    printf("Muito bem, obrigado por jogar\n");
    printf("Fim do jogo\n");
    }
  }
}
