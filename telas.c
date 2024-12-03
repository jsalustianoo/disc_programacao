int main(int argc, char const *argv[])
{
    int situacao[11];

    int situacao_valida = 0;
    while(!situacao_valida){
        printf("Escolha dentre as opções: \n");
        printf("\n      1 - Agendado");
        printf("\n      2 - Finalizado");
        printf("\n      3 - Cancelado");
        printf("\n\n------      (Situação): ");
        scanf("%s", situacao);

        if(strcmp(situacao, "1") == 0){
            situacao_valida = 1;
            printf("Ok");
        }else if(strcmp(situacao, "2") == 0){
            situacao_valida = 1;
            printf("Ok");
        }else if(strcmp(situacao, "3") == 0){
            situacao_valida = 1;
            printf("Ok");
        }else{
            printf("\n=========== Situação Inválida! Tente Novamente! ===========\n\n");

        }
    }

    return 0;
}
