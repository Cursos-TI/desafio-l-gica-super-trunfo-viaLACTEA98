#include <stdio.h>

int main() {
    // Carta 1
    char nome_cidade1[50];
    float area1, pib1;
    int pontos_turisticos1, populacao1;
    char estado1[50];
    char codigo_carta1[50];

    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta1);

    // Carta 2
    char nome_cidade2[50];
    float area2, pib2;
    int pontos_turisticos2, populacao2;
    char estado2[50];
    char codigo_carta2[50];

    printf("\nCarta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta2);

    // Comparação
    int pontos_cidade1 = 0, pontos_cidade2 = 0;

    printf("\n--- RESULTADOS DAS COMPARAÇÕES ---\n");

    // População
    if (populacao1 > populacao2) {
        printf("%s tem maior população.\n", nome_cidade1);
        pontos_cidade1++;
    } else if (populacao2 > populacao1) {
        printf("%s tem maior população.\n", nome_cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("%s tem maior PIB.\n", nome_cidade1);
        pontos_cidade1++;
    } else if (pib2 > pib1) {
        printf("%s tem maior PIB.\n", nome_cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Área
    if (area1 > area2) {
        printf("%s tem maior área.\n", nome_cidade1);
        pontos_cidade1++;
    } else if (area2 > area1) {
        printf("%s tem maior área.\n", nome_cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("%s tem mais pontos turísticos.\n", nome_cidade1);
        pontos_cidade1++;
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("%s tem mais pontos turísticos.\n", nome_cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
    }

    // Resultado final
    printf("\n--- RESULTADO FINAL ---\n");
    if (pontos_cidade1 > pontos_cidade2) {
        printf("A cidade vencedora é %s com %d atributos vencidos!\n", nome_cidade1, pontos_cidade1);
    } else if (pontos_cidade2 > pontos_cidade1) {
        printf("A cidade vencedora é %s com %d atributos vencidos!\n", nome_cidade2, pontos_cidade2);
    } else {
        printf("Empate! Ambas as cidades venceram em %d atributos.\n", pontos_cidade1);
    }
    

    return 0;
    }

