#include <stdio.h>

// Função de cadastro de duas cartas para o jogo super trunfo,
// As cartas são cadastradas separadamente e imprimem seus respectivos valores ao final do cadastro
int main() {
  // Variáveis
  char estado1, estado2;
  char codigo_carta1[4], codigo_carta2[4];
  char nome_cidade1[20], nome_cidade2[20];
  int populacao1, populacao2;
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
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

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

  // Valores das cartas
  // Carta 1
  printf("  \n");
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo_carta1);
  printf("Nome da Cidade: %s \n", nome_cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2fkm² \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf("PIB per Capita: %.2f reais \n", pib_per_capita1);

  // Carta 2
  printf("  \n");
  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo_carta2);
  printf("Nome da Cidade: %s \n", nome_cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2fkm² \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", pib_per_capita2);
  return 0;
}