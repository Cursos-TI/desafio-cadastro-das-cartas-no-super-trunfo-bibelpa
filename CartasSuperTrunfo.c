#include <stdio.h>


int main() {

    // Atributos
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    printf("Digite o número da população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite o número da população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    // Exibição dos Dados das Cartas:
    printf("Carta da cidade 1: %d \n Pontos turísticos da carta 1: %d \n Área da carta 1: %fkm² \n PIB da carta 1: %f", populacao1, pontos_turisticos1, area1, pib1);
    printf (" \n Carta da cidade 2: %d \n Pontos turísticos da carta 2: %d \n Área da carta 2: %fkm² \n PIB da carta 2: %f", populacao2, pontos_turisticos2, area2, pib2);


    return 0;
}
