#include <stdio.h>

// Desafio Super Trunfo - Países
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
   
    char nome1[20] = "Brasil" , nome2[20] = "Chile";
    unsigned long int populacao1 = 12325000 , populacao2 = 6748000;
    int pontos1 = 50, pontos2 = 30;
    float area1 = 1521.11 , area2 = 1200.25, pib1 = 699.28, pib2 = 300.50;
    float densidadepop1, densidadepop2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    int escolhaJogador;

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
    printf("Nome do País: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km² \n", densidadepop1);
    printf("PIB per capita: %.2f reais \n\n", pibpercapita1);
    
    printf("CARTA 2\n");
    printf("Nome do País: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km² \n", densidadepop2);
    printf("PIB per capita: %.2f reais \n\n", pibpercapita2);
    
    // Implementação da Lógica de Comparação

    printf("\nComparação das Cartas, escolha um atributo \n"); 
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Populacional \n");
    scanf("%d", &escolhaJogador);

switch (escolhaJogador) {
    case 1:
        printf("%s versus %s: no atributo População!\n", nome1, nome2);
        printf("De um lado temos %s com %lu habitantes \n", nome1, populacao1);
        printf("Do outro lado temos %s com %lu habitantes \n", nome2, populacao2);
      if (populacao1 > populacao2) {
        printf("O país vencedor é: %s \n\n", nome1);
    } else if (populacao1 < populacao2) {
         printf("O país vencedor é: %s \n\n", nome2);
    } else {
        printf("Empate! \n\n");
    }
      break;

    case 2:
    printf("%s versus %s: no atributo Área!\n", nome1, nome2);
        printf("De um lado temos %s com %.2f km² \n", nome1, area1);
        printf("Do outro lado temos %s com %.2f km² \n", nome2, area2);
      if (area1 > area2) {
        printf("O país vencedor é: %s \n\n", nome1);
    } else if (area1 < area2) {
         printf("O país vencedor é: %s \n\n", nome2);
    } else {
        printf("Empate! \n\n");
    }
      break;

    case 3:
    printf("%s versus %s: no atributo PIB!\n", nome1, nome2);
        printf("De um lado temos %s com %.2f bilhões de reais \n", nome1, pib1);
        printf("Do outro lado temos %s com %.2f bilhões de reais \n", nome2, pib2);
      if (pib1 > pib2) {
        printf("O país vencedor é: %s \n\n", nome1);
    } else if (pib1 < pib2) {
         printf("O país vencedor é: %s \n\n", nome2);
    } else {
        printf("Empate! \n\n");
    }
      break;

    case 4:
    printf("%s versus %s: no atributo Pontos Turísticos!\n", nome1, nome2);
        printf("De um lado temos %s com %d pontos turísticos \n", nome1, pontos1);
        printf("Do outro lado temos %s com %d pontos turísticos \n", nome2, pontos2);
      if (pontos1 > pontos2) {
        printf("O país vencedor é: %s \n\n", nome1);
    } else if (pontos1 < pontos2) {
         printf("O país vencedor é: %s \n\n", nome2);
    } else {
        printf("Empate! \n\n");
    }
      break;

  case 5:
    printf("%s versus %s: no atributo Densidade Populacional!\n", nome1, nome2);
        printf("De um lado temos %s com %.2f habitantes/km² \n", nome1, densidadepop1);
        printf("Do outro lado temos %s com %.2f habitantes/km² \n", nome2, densidadepop2);
      if (densidadepop1 < densidadepop2) {
        printf("O país vencedor é: %s \n\n", nome1);
    } else if (densidadepop1 > densidadepop2) {
         printf("O país vencedor é: %s \n\n", nome2);
    } else {
        printf("Empate! \n\n");
    }
      break;

    default:
      printf("Opção inválida\n");
      break;

}
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
