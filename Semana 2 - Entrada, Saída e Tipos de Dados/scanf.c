#include <stdio.h>

int main(){
    char primeiro_nome[20], segundo_nome[20];

    printf("Digite seu nome: ");
    scanf("%s %s", &primeiro_nome, &segundo_nome);
    printf("Nome: %s %s\n", primeiro_nome, segundo_nome);
    printf("Primeiro nome: %s\n", primeiro_nome);
    printf("Segundo nome: %s\n", segundo_nome);
}