#include <stdio.h>

int main() {
    // Declaracao das variaveis da Carta 1
    char estado1; // Exemplo: A
    char codigo1[4]; // Exemplo: A01
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaracao das variaveis da Carta 2
    char estado2; // Exemplo: B
    char codigo2[4]; // Exemplo: B02
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Variaveis de calculo
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura dos dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado (ex: A): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
     scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado (ex: B): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibicao dos dados calculados
    printf("\n--- Dados Calculados ---\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Carta 1 - PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Carta 1 - Super Poder: %.2f\n", superPoder1);

    printf("\n");

    printf("Carta 2 - Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("Carta 2 - PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Carta 2 - Super Poder: %.2f\n", superPoder2);

    // Resultados das comparacoes
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Populacao: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
    printf("Area: %s venceu\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turisticos: %s venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2");

    return 0;
}
