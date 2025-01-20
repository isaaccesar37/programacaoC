#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    //sintaxe scanf
    //scanf("formato1" "formato2, &variavel1, variavel2, ...);
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    printf("idade: %d\n", idade);
    printf("Entre com sua altura\n");
    scanf("%e", &altura);
    printf("Entre com sua opcao\n");
    scanf(" %c", &opcao);
    printf("%c\n", opcao);


}