#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cidade[51];
    printf("Digite uma Cidade: ");
    scanf(" %50[^\n]", cidade); // Está limitando a leitura a 50 caracteres para garantir que o caracter do \0 não seja ocupado
    printf(cidade);

    int tamanho = strlen(cidade);
    return 0;
}
