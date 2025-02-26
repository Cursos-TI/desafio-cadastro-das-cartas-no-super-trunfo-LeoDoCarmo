#include <stdio.h>
#include <stdlib.h>


void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {} //comando para a limpeza do buffer.
}


int main() {
    char Estado1, Estado2;
    char CodigoDaCarta1[50], CodigoDaCarta2[50], NomeDaCidade1[50], NomeDaCidade2[50];
    int populacao1, populacao2, NumeroPontoTuristico1, NumeroPontoTuristico2;
    float area1, area2, PIB1, PIB2;

    printf("Digite os dados das cartas: \n");
    printf("Carta 1 \n"); //declarei a carta.

    printf("Estado: ");
    scanf("%c", &Estado1); //solicitei o Estado.
    limpar_entrada();
    printf("Codigo: ");
    scanf("%s", CodigoDaCarta1); //solicitei o codigo da carta.
    limpar_entrada();
    printf("Nome da Cidade: ");
    scanf("%s", &NomeDaCidade1); //solicitei o nome da cidade.
    limpar_entrada();
    printf("Populacao: ");
    scanf("%d", &populacao1); //solicitei o numero da população.
    printf("Area: ");
    scanf("%f", &area1); //solicitei a area territorial.
    printf("PIB: ");
    scanf("%f", &PIB1); //solicitei o PIB.
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &NumeroPontoTuristico1); //solicitei o numero de ponto de turismo da cidade.
    printf("\n");

    printf("Digite os dados das cartas: \n");
    printf("Carta 2 \n"); //declarei a carta.

    limpar_entrada();
    printf("Estado: ");
    scanf("%c", &Estado2); //solicitei o Estado.
    limpar_entrada();
    printf("Codigo: ");
    scanf("%s", CodigoDaCarta2); //solicitei o codigo da carta.
    limpar_entrada();
    printf("Nome da Cidade: ");
    scanf("%s", &NomeDaCidade2); //solicitei o nome da cidade.
    limpar_entrada();
    printf("Populacao: ");
    scanf("%d", &populacao2); //solicitei o numero da população.
    printf("Area: ");
    scanf("%f", &area2); //solicitei a area territorial.
    printf("PIB: ");
    scanf("%f", &PIB2); //solicitei o PIB.
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &NumeroPontoTuristico2); //solicitei o numero de ponto de turismo da cidade.

    printf("\n");
    printf("Carta 1 \n"); //abaixo dei saida a todos os dados coletados.
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", NumeroPontoTuristico1);

    printf("\n");
    printf("Carta 2 \n"); //abaixo dei saida a todos os dados coletados.
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", NumeroPontoTuristico2);

return 0;
}
