#include <stdio.h>

int main() {
    char nome[100]; // Array para armazenar a string

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê uma linha inteira de entrada

    // Remove o caractere de nova linha se estiver presente
    size_t len = strlen(nome);
    if (len > 0 && nome[len - 1] == '\n') {
        nome[len - 1] = '\0';
    }

    printf("Saudacoes, %s\n", nome); // Usa %s para imprimir uma string

    return 0;
}