int main(int argc, char const *argv[])
{
    printf("\"Hello World\"\n"); // Como aspas duplas são caracteres especiais, para usar elas como texto é preciso colocar uma barra invertida antes

printf("\nBLOCO 1 - START\n\n");

    printf("Meu nome eh: %s\n", "Jose S. N. Junior"); // Para palavras tem que ser aspas duplas
    printf("Data do meu aniversario: %d/%d/%d\n", 17, 11, 2004);
    printf("Letra aleatoria: %c\n", 'S'); // Para letra única tem que ser aspas simples
    printf("Numero com casas decimais: %f\n", 17.515156156);
    printf("Numero com 3 casas decimais: %.3f\n", 17.515156156);

printf("\nBLOCO 1 - END\n\n");

printf("\nBLOCO 2 - START\n\n");

    // Char é o tipo de variável para Strings, podendo ser apenas 1 letra ou várias (palavras)
    char nome[45];
    int idade;

    printf("Digite seu Nome e sua Idade: ");
    scanf("%s %d", &nome, &idade);

    printf("\nNome e Idade: %s %d\n", nome, idade);
    printf("\n      - Nome: %s", nome);
    printf("\n      - Idade: %d\n", idade);
    printf("\n");

printf("\nBLOCO 2 - END\n\n");

printf("\nBLOCO 3 - START\n\n");

    // Quando você quiser coletar apenas 1 letra, não se define o valor 1 entre colchetes, se fizer isso ele vai automaticamente 
    // preencher a variável com qualquer caracter. Declare apenas o nome da variável que ele entenderá
    char letra; 

    printf("Digite seu nome: "); 
    scanf("%s", &nome); 
    getchar(); // Sempre que coletar uma variável desse usar essa função, ela faz uma limpeza no coletor
    printf("      - Ola, %s! Seja bem vindo!\n", nome); // Exibindo o valor entre um texto

    printf("\nDigite uma letra: ");
    scanf("%c", &letra);
    getchar();
    printf("      - (Letra digitada): %c\n", letra);

printf("\nBLOCO 3 - END\n\n");
    
    return 0;
}
