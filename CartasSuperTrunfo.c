#include <stdio.h>

// Função de cadastro de duas cartas para o jogo super trunfo,
// As cartas são cadastradas separadamente e imprimem seus respectivos valores ao final do cadastro
int main() {
  // Variáveis
  char estado1, estado2;
  char codigo_carta1[4], codigo_carta2[4];
  char nome_cidade1[20], nome_cidade2[20];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
  
  // Título
  printf("Olá, Este é o Super Trunfo em C. \n");

  // Primeira carta
  printf("  \n");

  printf("Cadastre a primeira carta: \n");
  printf("Estado: ");
  scanf(" %c", &estado1);
  
  printf("Código da carta: ");
  scanf("%s", codigo_carta1);

  printf("Nome da Cidade: ");
  scanf("%s", nome_cidade1);

  printf("População: ");
  scanf("%lu", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("Pib: ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  // Segunda carta
  printf("  \n");

  printf("Cadastre a segunda carta: \n");
  printf("Estado: ");
  scanf(" %c", &estado2);
  
  printf("Código da carta: ");
  scanf("%s", codigo_carta2);

  printf("Nome da Cidade: ");
  scanf("%s", nome_cidade2);

  printf("População: ");
  scanf("%lu", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("Pib: ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  float densidade1 = (float) populacao1 / area1;
  float densidade2 = (float) populacao2 / area2;
  float pib_per_capita1 = (float) pib1 / populacao1;
  float pib_per_capita2 = (float) pib2 / populacao2;

  float superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
  float superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

  // Valores das cartas
  // Carta 1
  printf("  \n");
  printf("Carta 1 \n===========\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo_carta1);
  printf("Nome da Cidade: %s \n", nome_cidade1);
  printf("População: %lu \n", populacao1);
  printf("Área: %.2fkm² \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf("PIB per Capita: %.2f reais \n", pib_per_capita1);
  printf("SuperPoder: %f\n",superpoder1);

  // Carta 2
  printf("  \n");
  printf("Carta 2 \n ===========\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo_carta2);
  printf("Nome da Cidade: %s \n", nome_cidade2);
  printf("População: %lu \n", populacao2);
  printf("Área: %.2fkm² \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", pib_per_capita2);
  printf("SuperPoder: %f\n",superpoder2);
  
  // Resultado
  printf("============\nResultado\n============\n");
  if (populacao1 > populacao2) {
    printf("População: Carta 1 venceu\n");
  } else {
      printf("População: Carta 2 venceu\n");
  }

  if (area1 > area2) {
      printf("Área: Carta 1 venceu\n");
  } else {
      printf("Área: Carta 2 venceu\n");
  }

  if (pib1 > pib2) {
      printf("PIB: Carta 1 venceu\n");
  } else {
      printf("PIB: Carta 2 venceu\n");
  }

  if (pontos_turisticos1 > pontos_turisticos2) {
      printf("Número de Pontos Turísticos: Carta 1 venceu\n");
  } else {
      printf("Número de Pontos Turísticos: Carta 2 venceu\n");
  }

  if ((1.0 / densidade1 ) > (1.0 / densidade2 )) {
      printf("Densidade Populacional: Carta 1 venceu\n");
  } else {
      printf("Densidade Populacional: Carta 2 venceu\n");
  }

  if (pib_per_capita1 > pib_per_capita2) {
      printf("PIB per Capita: Carta 1 venceu\n");
  } else {
      printf("PIB per Capita: Carta 2 venceu\n");
  }

  if (superpoder1 > superpoder2) {
      printf("SuperPoder: Carta 1 venceu\n");
  } else {
      printf("SuperPoder: Carta 2 venceu\n");
  }
  return 0;
}