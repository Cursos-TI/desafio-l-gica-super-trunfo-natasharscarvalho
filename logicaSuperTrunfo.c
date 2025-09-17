#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[2] = "A", estado2[2] = "B";
    char codigo1[4] = "A01" , codigo2[4] = "BO2";
    char nome1[20] = "SP" , nome2[20] = "RJ";
    unsigned long int populacao1 = 12325000 , populacao2 = 6748000;
    int pontos1 = 50, pontos2 = 30;
    float area1 = 1521.11 , area2 = 1200.25, pib1 = 699.28, pib2 = 300.50;
    float densidadepop1, densidadepop2;
    float pibpercapita1, pibpercapita2; 
    float superpoder1, superpoder2;


    // Cálculo da Densidade Populacional

    densidadepop1 = (float) populacao1 / area1;
    densidadepop2 = (float) populacao2 / area2;

    // Cálculo do PIB per capita

    pibpercapita1 = (float) pib1 * 1000000000/ populacao1;
    pibpercapita2 = (float) pib2 * 1000000000/ populacao2;

    // Cálculo do Super Poder
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1/densidadepop1));
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1/densidadepop2));


    printf("\n\nCARTA 1\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km² \n", densidadepop1);
    printf("PIB per capita: %.2f reais \n\n", pibpercapita1);
    
    printf("CARTA 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km² \n", densidadepop2);
    printf("PIB per capita: %.2f reais \n\n", pibpercapita2);

    // Comparação das Cartas
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("\nComparação das Cartas (Atributo: População): \n"); 
    printf("Carta 1 - %s : %lu \n", nome1, populacao1);
    printf("Carta 2 - %s : %lu \n", nome2, populacao2);

    if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s \n\n", nome1);
    } else {
        printf("A cidade vencedora é: %s \n\n", nome2);
    }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
