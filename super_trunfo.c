#include <stdio.h>

int main(){

    // Variáveis iniciais da Carta 1
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    unsigned long int populacao1;
    int pontos1;
    float area1, PIB1; 
    

    // Variáveis iniciais da Carta 2
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    unsigned long int populacao2;
    int pontos2;
    float area2, PIB2;

    // Entrada dos dados da Carta 1
    printf(" ** Insira os dados da carta 1 ** \n");

    printf("Insira do Estado: \n");
    scanf("%s", estado1);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Insira o número de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);

    printf("Insira a área (em km²): \n");
    scanf("%f", &area1);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB1);


    // Entrada dos dados da Carta 2
    printf(" ** Insira os dados da carta 2 ** \n");

    printf("Insira do Estado: \n");
    scanf("%s", estado2);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Insira o número de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    printf("Insira a área (em km²): \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB2);


    // Cálculo da Densidade Populacional e do PIB per Capita da Carta 1
    float densidade1 = (float) populacao1 / area1;
    float PpC1 = (float) PIB1 / populacao1;

    // Cálculo da Densidade Populacional e do PIB per Capita da Carta 2
    float densidade2 = (float) populacao2 / area2;
    float PpC2 = (float) PIB2 / populacao2;
    
    // Cálculo do Super Poder (soma de todos os atributos númericos mais o inverso da densidade populacional)
    float SuperPoder1 = (float) populacao1 + area1 + PIB1 + pontos1 + PpC1 + (1 / densidade1);
    float SuperPoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + PpC2 + (1 / densidade2);


    // Exibição dos dados da Carta 1
    printf(" ** Carta 1 ** \n");

    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", PpC1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Exibição dos dados da Carta 2
    printf(" ** Carta 2 ** \n");

    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", PpC2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação das cartas
    printf(" ** Comparação entre os atributos das cartas (Número 1 corresponde à vitória da Carta 1 e o número 0 corresponde à vitória da Carta 2) ** \n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Número de pontos turísticos: %d\n", pontos1 > pontos2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Densidade populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", PpC1 > PpC2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    return 0;
}