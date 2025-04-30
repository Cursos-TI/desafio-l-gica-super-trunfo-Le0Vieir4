#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    // Registro da primeira carta
    printf("*** Carta 1 ***\n");
    char estado1 = 'A';
    char codigo1[3] = "01";
    char cidade1[20] = "São Paulo";
    unsigned long int populacao1;
    float area1, densidade_populacional1, inverso_densidade_populacional1, PIB1, PIB1_ajustado, PIB_per_capita1, super_poder1;
    int numero_de_pontos_turisticos1;

    printf("Digite o número de habitantes: ");
    scanf("%ld", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    densidade_populacional1 = (float)populacao1 / area1;
    inverso_densidade_populacional1 = 1 / densidade_populacional1;
    PIB1_ajustado = PIB1 * 1000000000;
    PIB_per_capita1 = PIB1_ajustado / (float)populacao1;
    super_poder1 = populacao1 + (long int)area1 + (long int)PIB1 + (long int)PIB_per_capita1 + inverso_densidade_populacional1 + numero_de_pontos_turisticos1;

    // Exibição dos Dados da Carta1:
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n bilhões de reais", PIB1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    // Registro da segunda carta
    printf("\n*** Carta 2 ***\n");
    
    char estado2 = 'B'; 
    char codigo2[3] = "02"; 
    char cidade2[20] = "Rio de Janeiro";
    unsigned long int populacao2;
    float area2, densidade_populacional2, inverso_densidade_populacional2, PIB2, PIB2_ajustado2, PIB_per_capita2, super_poder2;
    int numero_de_pontos_turisticos2;

    printf("Digite o número de habitantes: ");
    scanf("%ld", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    inverso_densidade_populacional2 = 1 / densidade_populacional2;
    PIB2_ajustado2 = PIB2 * 1000000000;
    PIB_per_capita2 = PIB2_ajustado2 / (float)populacao2;
    super_poder2 = populacao2 + (long int)area2 + (long int)PIB2 + (long int)PIB_per_capita2 + inverso_densidade_populacional2 + numero_de_pontos_turisticos2;

    // Exibição dos Dados da Carta2:
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n bilhões de reais", PIB2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    // Comparação das cartas
    printf("\n*** Comparação das Cartas (Atributo: PIB) ***\n");
   

    printf("carta 1 - %s (%c): R$ %.2f\n", cidade1, estado1, PIB1);
    printf("carta 2 -%s (%c): R$ %.2f\n", cidade1, estado2, PIB2);
     if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%c) venceu\n", estado1);
    } 
    else if(PIB1 == PIB2) {
        printf("As cartas 1 e 2 são iguais.\n");
    }
    else {
        printf("Resultado: Carta 2 (%c) venceu\n", estado2);
    }
    return 0;
}
