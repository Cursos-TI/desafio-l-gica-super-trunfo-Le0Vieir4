#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de Estados.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Registro da primeira carta
    printf("*** Carta 1 ***\n");
    char pais1 = 'A';
    char codigo1[3] = "01";
    char Estado1[20] = "São Paulo";
    unsigned long int populacao1;
    float area1, densidade_populacional1, inverso_densidade_populacional1, PIB1, PIB1_ajustado, PIB_per_capita1, super_poder1;
    int numero_de_pontos_turisticos1;
    int opcao;

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
    printf("pais: %c\n", pais1);
    printf("Código: %c%s\n", pais1, codigo1);
    printf("Nome da Estado: %s\n", Estado1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n bilhões de reais", PIB1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    // Registro da segunda carta
    printf("\n*** Carta 2 ***\n");

    char pais2 = 'B';
    char codigo2[3] = "02";
    char Estado2[20] = "Rio de Janeiro";
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
    printf("pais: %c\n", pais2);
    printf("Código: %c%s\n", pais2, codigo2);
    printf("Nome da Estado: %s\n", Estado2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n bilhões de reais", PIB2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    // Comparação das cartas

    printf("\n*** Digite o Atributo que deseja comparar ***\n");
    printf("1 - Nome do pais\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - Densidade populacional\n");
    printf("5 - PIB\n");
    printf("6 - Número de pontos turísticos\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Nome do pais 1: %c - Nome do pais 2: %c\n", pais1, pais2);
        break;
    case 2:

        if (populacao1 > populacao2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("População da carta 1: %ld - População da carta 2: %ld\n", populacao1, populacao2);
            printf("Carta 1 (%c) venceu\n", pais1);
        }
        else if (populacao1 == populacao2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("População da carta 1: %ld - População da carta 2: %ld\n", populacao1, populacao2);
            printf("Empate! - As populações são iguais.\n");
        }
        else
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("População da carta 1: %ld - População da carta 2: %ld\n", populacao1, populacao2);
            printf("Carta 2 (%c) venceu\n", pais2);
        }
        break;
    case 3:
        if (area1 > area2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Área da carta 1: %.2f km² - Área da carta 2: %.2f km²\n", area1, area2);
            printf("Carta 1 (%c) venceu\n", pais1);
        }
        else if (area1 == area2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Área da carta 1: %.2f km² - Área da carta 2: %.2f km²\n", area1, area2);
            printf("Empate! - As áreas são iguais.\n");
        }
        else
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Área da carta 1: %.2f km² - Área da carta 2: %.2f km²\n", area1, area2);
            printf("Carta 2 (%c) venceu\n", pais2);
        }
        break;
    case 4:
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Densidade populacional da carta 1: %.2f hab/km² - Densidade populacional da carta 2: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
            printf("Carta 1 (%c) venceu\n", pais1);
        }
        else if (densidade_populacional1 == densidade_populacional2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Densidade populacional da carta 1: %.2f hab/km² - Densidade populacional da carta 2: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
            printf("Empate! - As densidades populacionais são iguais.\n");
        }
        else
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Densidade populacional da carta 1: %.2f hab/km² - Densidade populacional da carta 2: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
            printf("Carta 2 (%c) venceu\n", pais2);
        }
        break;
    case 5:
        if (PIB1 > PIB2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("PIB da carta 1: R$ %.2f bilhões de reais - PIB da carta 2: R$ %.2f bilhões de reais\n", PIB1, PIB2);
            printf("Carta 1 (%c) venceu\n", pais1);
        }
        else if (PIB1 == PIB2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("PIB da carta 1: R$ %.2f bilhões de reais - PIB da carta 2: R$ %.2f bilhões de reais\n", PIB1, PIB2);
            printf("Empate! - Os PIBs são iguais.\n");
        }
        else
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("PIB da carta 1: R$ %.2f bilhões de reais - PIB da carta 2: R$ %.2f bilhões de reais\n", PIB1, PIB2);
            printf("Carta 2 (%c) venceu\n", pais2);
        }
        break;
    case 6:
        if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Número de pontos turísticos da carta 1: %d - Número de pontos turísticos da carta 2: %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
            printf("Carta 1 (%c) venceu\n", pais1);
        }
        else if (numero_de_pontos_turisticos1 == numero_de_pontos_turisticos2)
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Número de pontos turísticos da carta 1: %d - Número de pontos turísticos da carta 2: %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
            printf("Empate! - O número de pontos turísticos é igual.\n");
        }
        else
        {
            printf("carta 1: %c X carta 2: %c\n", pais1, pais2);
            printf("Número de pontos turísticos da carta 1: %d - Número de pontos turísticos da carta 2: %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
            printf("Carta 2 (%c) venceu\n", pais2);
        }
        break;
        case 7:
        printf("Sair do jogo\n");
        break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;
    }

    return 0;
}
