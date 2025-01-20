#include <stdio.h>

int main(){
    int condicao1, condicao2;

    // estrutura aninhada
    if (condicao1) {
        if (condicao2) {
            // Código a ser executado se condicao1 e condicao2 forem verdadeiros
        } // Adicionei a chave de fechamento para o segundo if
    }
        
    // estrutura encadeada
    if (condicao1) {
        // Código a ser executado se a condicao1 for verdadeira
    } else if (condicao2) {
        // Código a ser executado se a condicao1 for falsa e condicao2 for verdadeira
    } else {
        // Código a ser executado se todas as condições anteriores forem falsas
    }
    return 0; // Certifique-se de adicionar a chave de fechamento para a função main
}
