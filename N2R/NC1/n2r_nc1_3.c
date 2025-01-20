#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;
    int c = 1;

    // a > 0 => Verdadeiro
    // b < 0 => Falso
    // Verdadeiro && Falso => Verdadeiro
    // Falso || c == 0
    // Falso || Falso => Falso


    if (a > 0 && b < 0 || c == 0) {
        printf("A condição e verdadeira\n");
    } else {
        printf("A condição e falsa\n");
    }
    return 0;
}
    
    