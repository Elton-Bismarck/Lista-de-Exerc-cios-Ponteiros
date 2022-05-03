#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  /* (a) */ 
  valor = 10;  //Valor Receber 10
  p1 = &valor;  //Passa o Endereço da Variavel Valor ao Ponteiro p1
  *p1 = 20;  //A Variavel p1 recebe 20, que coloca o valor no endereço da variavel valor
  printf("%d \n", valor);  //Imprime a variavel valor com valor igual a 20
  
  /* (b) */
  temp = 26.5;  //temp recebe float igual 26.5
  p2 = &temp;  //Passa o endereço da variavel temp ao ponteiro p2
  *p2 = 29.0;  //A Variavel p2 recebe 29.0, que coloca o valor no endereço da variavel temp
  printf("%.1f \n", temp);  //Imprime a variavel temp com 1 casa de precisão com valor igual a 20
  
  /* (c) */
  p3 = &nome[0];  //p3 recebe o endereco da primeiro elemento da variavel nome, que é igual a "p"
  aux = *p3;  //aux recebe o valor contido no endereço do primeiro elemento da variavel nome
  printf("%c \n", aux);  //Imprime aux, que contem o valor do primeiro elemento da variavel nome
  
  /* (d) */
  p3 = &nome[4];  //p3 recebe o endereco do quinto elemento da variavel nome, que é igual a "e"
  aux = *p3;  //aux recebe o valor contido no endereço do quinto elemento da variavel nome
  printf("%c \n", aux);  //Imprime aux, que contem o valor do quinto elemento da variavel nome
  
  /* (e) */
  p3 = nome;  //p3 aponta somente para o endereço do primeiro elemento da variavel nome
  printf("%c \n", *p3);  //Imprime apenas o primeiro elemento da variavel nome
  
  /* (f) */
  p3 = p3 +4;  //Como p3 apontava para o endereço do primeiro elemento da variavel nome, a operaçao muda o valor referenciado para o quinto elemento da variavel nome
  printf("%c \n", *p3); //Imprime o quinto elemento da variavel nome
  
  /* (g) */
  p3--;  //Decrementa o lugar onde p referenciava, agora ele aponta para o quarto elemento da variavel nome
  printf("%c \n", *p3);  //Imprime o quarto elemento da variavel nome
  
  /* (h) */
  vetor[0] = 31;  //declara que o primeiro elemento da variavel vetor recebe 31
  vetor[1] = 45;  //declara que o primeiro elemento da variavel vetor recebe 45
  vetor[2] = 27;  //declara que o primeiro elemento da variavel vetor recebe 27
  p4 = vetor;  //p4 aponta para o primeiro elemento da variavel vetor, que é igual a 31
  idade = *p4;  //idade recebe p4, que é o primeiro elemento da variavel vetor, que é igual a 31
  printf("%d \n", idade); //imprime idade igual a 31
  
  /* (i) */
  p5 = p4 +1;  //p5 aponta para p4 que aponta para o primeiro elemento da variavel vetor, somado a mais 1, logo p5 ira apontar para o segundo elemento da variavel vetor
  idade = *p5;  //idade recebe p5 que aponta para o segundo elemento da variavel vetor, que é igual a 45
  printf("%d \n", idade);//imprime idade igual a 45
  
  /* (j) */
  p4 = p5 +1;  //p4 agora aponta para p5 somado a mais 1, logo p4 agora ira apontar para o terceiro elemento da variavel vetor
  idade = *p4;  ////idade recebe p4 que aponta para o terceiro elemento da variavel vetor, que é igual a 27
  printf("%d \n", idade);  //imprime idade igual 27
  
  /* (l) */
  p4 = p4 - 2;  //p4 apontava para o terceiro elemento da variavel vetor, com o decremento ela agora aponta para o primeiro elemento
  idade = *p4;  //idade recebe p4
  printf("%d \n", idade);  //imprime idade igual 31
  
  /* (m) */
  p5 = &vetor[2] - 1;  //p5 recebe o endereço do terceiro elemento da variavel vetor, que é decrementado e agora aponta para o elemento anterior
  printf("%d \n", *p5); //imprime p5 que aponta para o segundo elemento, igual a 45
  
  /* (n) */
  p5++;  //incrementa p5, que agora aponta para o terceiro elemento da variavel vetor
  printf("%d \n", *p5);  //imprime p5 igual 27
  return(0);
}