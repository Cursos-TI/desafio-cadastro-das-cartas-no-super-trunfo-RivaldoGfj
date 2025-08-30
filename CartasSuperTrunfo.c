#include <stdio.h>

int main() {
    // CARTA 1 
    char estado1[3];      
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTur1;
    float densidade1;
    float pibPerCapita1;

    // CARTA 2 
    char estado2[3];      
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;
    float densidade2;
    float pibPerCapita2;

    // CARTA 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado: ");
    scanf("%2s", estado1);  

    printf("Código: ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur1);

    // cálculo densidade e pib per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    // Entrada - CARTA 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Código: ");
    scanf("%4s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur2);

    // cálculo densidade e pib per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    printf("\n CARTAS CADASTRADAS COM SUCESSO!\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d hab\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d hab\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}