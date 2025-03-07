#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[3];
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Codigo: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // PIB em reais

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %s", estado2);
    printf("Codigo: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // PIB em reais

    // Menu Interativo
    int opcao;
    printf("\n\nEscolha o atributo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per capita\n");
    scanf("%d", &opcao);

    // Comparação das cartas
    printf("\nComparacao de cartas:\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n", cidade2, estado2);

    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Area\n");
            printf("Carta 1: %.2f\n", area1);
            printf("Carta 2: %.2f\n", area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1: %d\n", pontos_turisticos1);
            printf("Carta 2: %d\n", pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demografica\n");
            printf("Carta 1: %.2f\n", densidade_populacional1);
            printf("Carta 2: %.2f\n", densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("Carta 1: %.2f\n", pib_per_capita1);
            printf("Carta 2: %.2f\n", pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
