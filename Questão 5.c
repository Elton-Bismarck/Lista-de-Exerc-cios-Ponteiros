int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};  //declara um array do tipo float de 5 elementos e declara seus elementos
  float *f; //declara um ponteiro do tipo float
  int i;  //declara uma variavel do tipo inteira
  f = vet;  //o ponteiro f agora aponta para o primeiro elemento do array vet
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);  //imprime i
  printf("vet[%d] = %.1f",i, vet[i]);  //imprime o elemento na posição i do array vet
  printf("*(f + %d) = %.1f",i, *(f+i));  //imprime o ponteiro f que aponta para o elemento que está na posiçao i
  printf("&vet[%d] = %X",i, &vet[i]);  //imprime o endereço da memoria que o elemento na posição i do array ocupa
  printf("(f + %d) = %X",i, f+i);  //imprime o endereço da memoria que o elemento na posição i do array ocupa, pelo operador %x
  }
}