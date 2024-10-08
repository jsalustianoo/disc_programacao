// Quiz para FÃS da primeira e ÚNICA Princesa do Pop Britney Spears
#include <stdio.h>

int main() {
    int pontos = 0;
    char continuar;

    do {
        printf("=== Quiz para FÃS da primeira e ÚNICA Princesa do Pop Britney Spears ===\n");

        printf("1) Quantas semanas seu primeiro single demorou para alcançar a 1° posição do principal chart de música dos EUA (Billboard Hot 100)?\n a) 6 semanas\nb) 2 semanas\nc) 8 semanas\nd) 5 semanas\n");
        char primeira_resposta;
        scanf(" %c", &primeira_resposta);
        if (primeira_resposta == 'a') {
            pontos += 1;
        }

        printf("2) Quanto tempo demorou após seu sucesso instantâneo para várias gravadoras lançarem suas 'Brintey's da Shopee'?\n a) 1 ano \n b) 2 anos \n c) 5 meses \n d) 6 meses \n");
        char segunda_resposta;
        scanf(" %c", &segunda_resposta);
        if (segunda_resposta == 'b') {
            pontos += 1;
        }

        printf("3) Quantos álbuns de estúdio Britney lançou?\n a) 8 \n b) 9 \n c) 10 \n d) 7 \n");
        char terceira_resposta;
        scanf(" %c", &terceira_resposta);
        if (terceira_resposta == 'b') {
            pontos += 1;
        }

        printf("4) Qual das opções abaixo contém a ordem correta de lançamento dos álbuns? \n a) Baby One More Time, Oops!... I Did It Again, Britney \n b) Oops!... I Did It Again, Britney, Baby One More Time \n c) Britney, Oops!... I Did It Again, Baby One More Time \n d) Baby One More Time, Britney, Oops!... I Did It Again \n ");
        char quarta_resposta;
        scanf(" %c", &quarta_resposta);
        if (quarta_resposta == 'a') {
            pontos += 1;
        }

        printf("5) Com quantos álbuns de estúdio lançados ela já teve hits o suficiente para lançar a coletânea 'Greatest Hits: My Prerogative'?\n a) 5 \n b) 6 \n c) 4 \n d) 7 \n");
        char quinta_resposta;
        scanf(" %c", &quinta_resposta);
        if (quinta_resposta == 'b') {
            pontos += 1;
        }

        printf("6. Qual foi o ano do VMA que ela dançou com uma cobra, marcando assim, não só a geração do momento, mas também, todas as futuras?\n");
        printf("a) 2000\nb) 2001\nc) 2002\nd) 2003\n");
        char resposta6;
        scanf(" %c", &resposta6);
        if (resposta6 == 'b') {
            pontos += 1;
        }

        printf("Você fez %d ponto(s)!\n", pontos);
        
        printf("Deseja continuar jogando? (s/n): ");
        scanf(" %c", &continuar);
        
        // Resetando pontos para o próximo jogo
        if (continuar == 's') {
            pontos = 0;
        }

    } while (continuar == 's');

    printf("Obrigado por jogar!\n");
    return 0;
}