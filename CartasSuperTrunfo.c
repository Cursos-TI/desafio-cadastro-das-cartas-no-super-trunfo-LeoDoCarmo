#include <stdio.h>

int main() {
    char Estado1, Estado2; 
    char[] CodigoDaCarta1, CodigoDaCarta2, NomeDaCidade1, NomeDaCidade2; 
    int populacao1, populacao2,  NumeroPontoTuristico1, NumeroPontoTuristico2; 
    float area1, area2, PIB1, PIB2;

    printf("Digite os dados das cartas: \n\n");
    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%c", &Estado1);
    printf("\n");
    printf("Código: ");
    scanf("%S", &CodigoDaCarta1);
    printf("\n");
    printf("Nome da Cidade: ");
    scanf("%s", &NomeDaCidade1);
    printf("\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("\n");
    printf("Área: ");
    scanf("%f", &area1);
    printf("\n");
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("\n");
    printf("Número de Pontos Turísticos: ");
    scanf("%f", &NumeroPontoTuristico1);
    printf("\n");


    printf("Carta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %f\n", NumeroPontoTuristico1);
    
    
    return 0;
}
