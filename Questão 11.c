aloha[2] = value;         Válido;
scanf("%f", &aloha);      Válido;
aloha = value";           Inválido, porque atribuir diretamente uma string para outra não é possível em C, e o " implica um erro de sintaxe;
printf("%f", aloha);      Válido;
coisas[4][4] = aloha[3];  Válido;
coisas[5] = aloha;        Inválido, não dá para atribuir um array para uma variável;
pf = value;               Válido;
pf = aloha;               Válido, porém ele referencia ao primeiro elemento do array.