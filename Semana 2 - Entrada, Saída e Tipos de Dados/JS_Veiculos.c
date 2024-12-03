// Printf, Scanf
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char marca[50], modelo[50], nome_proprietario[100];

    printf("---   JS Veículos   ---\n");

    printf("\nCadastro de Veículo");
    printf("\n      - (Digite a Marca): ");
    // Com essa configuração da 1ª posição do Scanf ele não salva nada após o 1º espaço
    scanf("%s", marca); 
    getchar(); // Serve para limpar o buffer, se não usar pode ser que após uma leitura o código pare 

    printf("      - (Digite O Modelo): ");
    // A 1ª posição do Scanf está assim para que ele salve todas as informaçõoes digitadas até o <Enter> 
    scanf(" %[^\n]", modelo); 
    getchar(); // Deve-se usar após cada Scanf

    printf("      - (Nome Completo do Proprietário): ");
    scanf(" %[^\n]", nome_proprietario);

    printf("\nVeículo Cadastrado: ");
    printf("\n      - (Marca): %s", marca);
    printf("\n      - (Modelo): %s", modelo);
    printf("\n      - (Proprietário): %s\n", nome_proprietario);
    printf("\n");

    printf("\nCadastro de Veículo");
    printf("\n      - (Marca e Modelo): ");
    // Esse Scanf está salvando Valores Diferentes em Variáveis Diferentes e os Valores Podem ser de Tipos 
    // Diferentes, mas o recomendado é sempre usar um Scanf para cada valor
    scanf("%s %s", marca, modelo);
    getchar();

    printf("\nVeículo Cadastrado: ");
    printf("\n      - (Marca e modelo): %s %s", marca, modelo);
    printf("\n            - (Marca): %s", marca);
    printf("\n            - (Modelo): %s\n", modelo);
    printf("\n");

    return 0;
}