#include <stdio.h>

void selection_sort(float num[], int tam){ //Algoritmo Básico de Ordenação
  int i, j, min;
  float aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}

int main(){
    float *vetflot;  //Declara o Array
    int tam = 0;  //Declara uma Auxiliar
    int tam2 = 2;  //Declara Outra auxiliar
    vetflot = malloc (tam2 * sizeof (int)); //Alocação Dinâmica do Array
    
    printf("Digite 0 Para Parar de Digitar\n");
    printf("Digite um Numero\n");
    scanf("%f", &vetflot[tam]); //Recebe Valores para o Array
    
    while (1 != 0){
        tam++; //Incrementa o Auxiliar
        printf("Digite um Numero\n");
        scanf ("%f", &vetflot[tam]); //Recebe Valores para o Array
        
        if(tam > tam2){ //Compara os Auxiliares
            vetflot = realloc (vetflot, (tam * 2) * sizeof (int)); //Usa realloc para Aumentar o Tamanho do Array
        }
        
        if(vetflot[tam]==0){ //Condição de Parada do Laço
            break;
        }
    }
    
    selection_sort(vetflot,tam); //Chamada da Função que Ordena os Valores do Array
    
    for(int i = 0; i < tam; i++){
        printf("%.1f\n", vetflot[i]); //Printa os Valores do Array
    }
    
    free(vetflot); //Libera a Memória
 
    return 0;
}
