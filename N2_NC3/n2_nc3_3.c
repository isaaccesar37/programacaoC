#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento (--)
    Pós-Decremento a--
    */
   
    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 + 1;
    //numeror1 += 1;
    //Pós incremento:
    //resultado = numeor1;
    //numero++;
    resultado = numero1++;
    //printf("Após incremento: %d\n", numero1);
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++ numero1;
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);



    //numero1 = numero1 - 1;
    //numeror1 -= 1;
    //numero1--;
    //printf("Após decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}