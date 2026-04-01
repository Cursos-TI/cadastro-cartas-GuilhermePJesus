#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
char estado1;
char codigo1[10];
char cidade1[50];
int populacao1;
int pontos1;
float area1;
float pib1;

  // Carta 2
char estado2;
char codigo2[10];
char cidade2[50];
int populacao2;
int pontos2;
float area2;
float pib2;

  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");

  printf("Estado (letra):");
  scanf("%c", &estado1);

  printf("Código:");
  scanf("%s", codigo1);

  printf("Nome da cidade:");
  scanf("%s", cidade1);

  printf("População:");
  scanf("%d", &populacao1);

  printf("Área:");
  scanf("%f", &area1);

  printf("PIB (em bilhões):");
  scanf("%f", &pib1);

  printf("Pontos Turísticos:");
  scanf("%d", &pontos1);

  printf("=== Cadastro da Carta 2 ===\n");

  printf("Estado (letra):");
  scanf("%c", &estado2);

  printf("Código:");
  scanf("%s", codigo2);

  printf("Nome da cidade:");
  scanf("%s", cidade2);

  printf("População:");
  scanf("%d", &populacao2);

  printf("Área:");
  scanf("%f", &area2);

  printf("PIB (em bilhões):");
  scanf("%f", &pib2);

  printf("Pontos Turísticos:");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade

  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB (em bilhões): %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB (em bilhões): %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos2);

return 0;
} 
