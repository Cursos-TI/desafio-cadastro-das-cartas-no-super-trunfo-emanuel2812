#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char codigo[10];
    float populacao;
    float area;
    double PIB;
    int pontos_turisticos;

    // Entrada de dados
    printf("Digite o nome do estado:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o codigo da cidade:\n");
    scanf("%s", codigo);

    printf("Digite o numero de habitantes:\n");
    scanf("%f", &populacao);

    printf("Digite a area (em km²):\n");
    scanf("%f", &area);

    // Limpar buffer após scanf para evitar interferência
    while (getchar() != '\n');

    printf("Digite o PIB:\n");
    scanf("%lf", &PIB);

    // Limpar buffer novamente após scanf
    while (getchar() != '\n');

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    // Saída de dados
    printf("\n=== Informacoes do Estado ===\n");
    printf("Nome do estado: %s\n", nome);
    printf("Codigo da cidade: %s\n", codigo);
    printf("Populacao: %.2f habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2lf\n", PIB);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    return 0;
}