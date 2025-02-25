#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main() {
    char Estado1;
    char CodigoDaCarta1[50], NomeDaCidade1[50];
    int populacao1, NumeroPontoTuristico1;
    float area1, PIB1;

    printf("Digite os dados das cartas: \n");
    printf("Carta 1 \n");

    printf("Estado: ");
    scanf("c", &Estado1);

    printf("Codigo: ");
    limpar_entrada();
    scanf("%S", &CodigoDaCarta1[50]);

    printf("Nome da Cidade: ");
    limpar_entrada();
    scanf("%s", &NomeDaCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &NumeroPontoTuristico1);
    printf("\n");

    limpar_entrada();

    printf("Carta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", NumeroPontoTuristico1);

return 0;
}