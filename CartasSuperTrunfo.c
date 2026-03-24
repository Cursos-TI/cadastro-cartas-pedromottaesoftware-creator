#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // ==Carta 1 ==
  char estado1[20];
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidadepopulacional1;
  float pibpercapita1;

  // ==Carta 2 ==
  char estado2[20];
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidadepopulacional2;
  float pibpercapita2;


  // Área para entrada de dados

  // Entrada de dados para carta 1
  printf("=== Cadastro da carta 1 ===\n");

  printf("estado: (A a H): \n");
  scanf(" %char *", &estado1);

  printf("codigo da carta (ex: A01): \n");
  scanf(" %s", codigo1);

  printf("Nome da cidade: \n");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf(" %d", &populacao1);

  printf("Área (km²): ");
  scanf(" %f", &area1);

  printf("PIB (em bilhões): ");
  scanf(" %f", &pib1);

  printf("Número de pontos turisticos: ");
  scanf(" %d", &pontosturisticos1);

  printf("Densidade (hab/km²): ");
  scanf(" %f", &densidadepopulacional1);

  printf("PIB per capita: ");
  scanf(" %f", &pibpercapita1);

  // Entrada de dados para carta 2
  printf("=== Cadastro da Carta 2 ===\n");

  printf("estado: (A a H): \n");
  scanf(" %char *, &estado2");

  printf("codigo da carta 2 (ex: B02): \n");
  scanf(" %s", codigo2);

  printf("Nome da cidade: \n");
  scanf(" %[^\n]", cidade2);
  
  printf("Populacao: ");
  scanf(" %d", &populacao2);

  printf("Área (km²): ");
  scanf(" %f", &area2);

  printf("PIB (em bilhões): ");
  scanf(" %f", &pib2);

  printf("Número de pontos turisticos: ");
  scanf(" %d", &pontosturisticos2);

  printf("Densidade (hab/km²): ");
  scanf(" %f", &densidadepopulacional2);

  printf("PIB per capita: ");
  scanf(" %f", &pibpercapita2);

  // Área para exibição dos dados da cidade
  
  // saida de dados das cartas
  printf("\n=== CARTAS CADASTRADAS ===\n");

  printf("\n carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("nome da cidade: %s\n", cidade1);
  printf("pupulacao: %d\n", populacao1);
  printf("area: %2.f km²\n", area1);
  printf("PIB: %.2f bilhões de reias\n", pib1);
  printf("numero de pontos turisticos: %d\n",pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
  printf("PIB per capita: %.2f reias\n", pibpercapita1);


  printf("\n carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turisticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
  printf("PIB per capita: %.2f reias\n", pibpercapita2);


return 0;
}




