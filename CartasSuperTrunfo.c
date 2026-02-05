#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    // Cadastro carta 1
    char estado1;
    int codigo1;
    char nome1[60];
    int populacao1;
    float area1;
    double pib1;
    int turismo1;
    char id1[4];

    // Cadastro carta 2
    char estado2;
    int codigo2;
    char nome2[60];
    int populacao2;
    float area2;
    double pib2;
    int turismo2;
    char id2[4];

    printf("Bem vindo ao sistema de Cadastro de Cartas Super Trunfo\n");
    printf("Cadastro Carta 1\n"); // Cadastro carta 1

        printf("Digite a primeira letra do estado (A-H): ");
        scanf(" %c", &estado1);

        printf("Digite o codigo do estado (1-4): ");
        scanf("%d", &codigo1);
        sprintf(id1, "%c%02d", estado1, codigo1);

        printf("Digite o nome do estado: ");
        getchar();
        fgets(nome1, 60, stdin);
        nome1[strcspn(nome1, "\n")] = '\0';


        printf("Digite a populacao do estado: ");
        scanf("%d", &populacao1);

        printf("Digite a Área do estado em Km²: ");
        scanf("%f", &area1);

        printf("Digite o PIB do estado em R$: ");
        scanf("%lf", &pib1);

        printf("Digite o índice de turismo do estado: ");
        scanf("%d", &turismo1);

    printf("Carta 1 cadastrada com sucesso!\n\n"); // Cadastro carta 1 concluído
        printf("ID da carta: %s\n", id1);

        printf("Nome do estado: %s", nome1);

        printf("População: %d\n", populacao1);

        printf("Área: %.2f Km²\n", area1);

        printf("PIB: R$ %.2lf\n", pib1);

        printf("Índice de turismo: %d\n\n", turismo1);

    printf("Cadastro Carta 2\n"); // Cadastro carta 2

        printf("Digite a primeira letra do estado (A-H): ");
        scanf(" %c", &estado2);

        printf("Digite o codigo do estado (1-4): ");
        scanf("%d", &codigo2);
        sprintf(id2, "%c%02d", estado2, codigo2);

        printf("Digite o nome do estado: ");
        limparBuffer();
        fgets(nome2, 60, stdin);
        nome2[strcspn(nome2, "\n")] = '\0';

        printf("Digite a populacao do estado: ");
        scanf("%d", &populacao2);

        printf("Digite a Área do estado em Km²: ");
        scanf("%f", &area2);

        printf("Digite o PIB do estado em R$: ");
        scanf("%lf", &pib2);

        printf("Digite o índice de turismo do estado: ");
        scanf("%d", &turismo2);

        system("cls");

    printf("Carta 2 cadastrada com sucesso!\n\n"); // Cadastro carta 2 concluído
        printf("ID da carta: %s\n", id2);

        printf("Nome do estado: %s", nome2);

        printf("População: %d\n", populacao2);

        printf("Área: %.2f Km²\n", area2);

        printf("PIB: R$ %.2lf\n", pib2);

        printf("Índice de turismo: %d\n\n", turismo2);

    return 0;
}
