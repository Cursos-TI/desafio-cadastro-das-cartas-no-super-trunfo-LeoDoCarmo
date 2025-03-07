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

    // Menu para escolha do primeiro atributo
    int opcao1, opcao2;
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per capita\n");
    scanf("%d", &opcao1);

    // Menu dinâmico para escolha do segundo atributo
    printf("\nEscolha o segundo atributo:\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) {
            printf("%d. ", i);
            switch (i) {
                case 1: printf("Populacao\n"); break;
                case 2: printf("Area\n"); break;
                case 3: printf("PIB\n"); break;
                case 4: printf("Pontos Turisticos\n"); break;
                case 5: printf("Densidade Demografica\n"); break;
                case 6: printf("PIB per capita\n"); break;
            }
        }
    }
    scanf("%d", &opcao2);

    // Comparação dos atributos
    int pontos1 = 0, pontos2 = 0;
    float valor1_atributo1, valor2_atributo1, valor1_atributo2, valor2_atributo2;

    switch (opcao1) {
        case 1: valor1_atributo1 = populacao1; valor2_atributo1 = populacao2; break;
        case 2: valor1_atributo1 = area1; valor2_atributo1 = area2; break;
        case 3: valor1_atributo1 = pib1; valor2_atributo1 = pib2; break;
        case 4: valor1_atributo1 = pontos_turisticos1; valor2_atributo1 = pontos_turisticos2; break;
        case 5: valor1_atributo1 = densidade_populacional1; valor2_atributo1 = densidade_populacional2; break;
        case 6: valor1_atributo1 = pib_per_capita1; valor2_atributo1 = pib_per_capita2; break;
    }

    switch (opcao2) {
        case 1: valor1_atributo2 = populacao1; valor2_atributo2 = populacao2; break;
        case 2: valor1_atributo2 = area1; valor2_atributo2 = area2; break;
        case 3: valor1_atributo2 = pib1; valor2_atributo2 = pib2; break;
        case 4: valor1_atributo2 = pontos_turisticos1; valor2_atributo2 = pontos_turisticos2; break;
        case 5: valor1_atributo2 = densidade_populacional1; valor2_atributo2 = densidade_populacional2; break;
        case 6: valor1_atributo2 = pib_per_capita1; valor2_atributo2 = pib_per_capita2; break;
    }

    pontos1 += (opcao1 == 5) ? (valor1_atributo1 < valor2_atributo1) : (valor1_atributo1 > valor2_atributo1);
    pontos2 += (opcao1 == 5) ? (valor2_atributo1 < valor1_atributo1) : (valor2_atributo1 > valor1_atributo1);
    pontos1 += (opcao2 == 5) ? (valor1_atributo2 < valor2_atributo2) : (valor1_atributo2 > valor2_atributo2);
    pontos2 += (opcao2 == 5) ? (valor2_atributo2 < valor1_atributo2) : (valor2_atributo2 > valor1_atributo2);

    // Exibição dos resultados
    printf("\nComparacao de cartas:\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n", cidade2, estado2);

    printf("Atributo 1: %d, Atributo 2: %d\n", opcao1, opcao2);
    printf("Carta 1: %.2f, %.2f\n", valor1_atributo1, valor1_atributo2);
    printf("Carta 2: %.2f, %.2f\n", valor2_atributo1, valor2_atributo2);

    printf("Pontos Carta 1: %d, Pontos Carta 2: %d\n", pontos1, pontos2);

    if (pontos1 > pontos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pontos2 > pontos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
