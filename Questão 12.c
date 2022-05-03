Ponteiro para função consiste em utilizar ponteiros para chamada de funções.
As funções possuem endereço fixo, então o ponteiro aponta para o endereço da função e tem 
a mesma lógica da função que foi atribuida.


#include <stdio.h>

int soma(int a,int b){
    int c = a + b;
    return c;
}

int main(){
    int (*ponteiro)(int,int);
    ponteiro = soma;
    printf("%d", ponteiro(3,4));

    return 0;
}