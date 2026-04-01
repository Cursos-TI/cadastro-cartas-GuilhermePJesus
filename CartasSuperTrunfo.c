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
  scanf("%s", &codigo1);

  printf("Nome da cidade:");
  scanf("%s", &cidade1);

  printf("População:");
  scanf("%d", &populacao1);

  printf("Área:");
  scanf("%f", &area1);

  printf("PIB (em bilhões):");
  scanf("%f", &pib1);

  printf("Pontos Turísticos:");
  scanf("%d", &pontos1);

  // Área para exibição dos dados da cidade

return 0;
} 
