#include <stdio.h>

int main(){
    int idade = 33;
    float altura = 1.70;
    char opcao = 'S';
    char nome[20] = "Isaac";

    printf("altura: %e\n", altura);
    printf("opcao: %c\n", opcao);
    printf("nome: %s\n idade: %d", nome, idade);
    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caracter.
    %s: Imprime uma cadeia (string) de caracteres.
    */
}