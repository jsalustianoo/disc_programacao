int main(int argc, char const *argv[])
{
    // Char é o tipo de variável para Strings, podendo ser apenas 1 letra ou várias (palavras)
    char nome[50]; 

    // Quando você quiser coletar apenas 1 letra, não se define o valor 1 entre colchetes, se fizer isso ele vai automaticamente 
    // preencher a variável com qualquer caracter. Declare apenas o nome da variável que ele entenderá
    char letra; 

    printf("Digite seu nome: "); // Pedindo para o usuário fornecer un valor, nesse caso, um nome
    scanf("%s", &nome); // Coletando esse valor e armazenando em uma variável
    printf("Ola, %s! Seja bem vindo!\n", nome); // Exibindo o valor entre um texto


    printf("\nDigite uma letra: ");
    scanf("%c", &letra);
    printf("%c", letra);


    return 0;
}
