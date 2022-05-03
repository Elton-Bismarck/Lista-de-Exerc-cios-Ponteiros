#include <stdio.h>

int comparador(const void* elem, const void* elem2){ //Função Comparador para o qsort
    if(*(const float*)elem < *(const float*)elem2){
        return -1;
    }
    return *(const float*)elem > *(const float*)elem2;
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
    
    qsort(vetflot, tam, sizeof(float), comparador); //Uso do qsort para Ordenação do Array
    
    for(int i = 0; i < tam; i++){
        printf("%.1f\n", vetflot[i]); //Printa os Valores do Array
    }
    
    free(vetflot); //Libera a Memória
 
    return 0;
}
