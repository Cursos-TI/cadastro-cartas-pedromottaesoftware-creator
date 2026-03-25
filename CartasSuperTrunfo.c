#include <stdio.h>

int main() {

  // ==Carta 1 ==
  char estado1[20];
  char codigo1[4];
  char cidade1[50];
  unsigned long int populacao1;
  float area1, pib1;
  int pontosturisticos1;
  float densidadepopulacional1;
  float pibpercapita1;
  float superpoder1;

  // ==Carta 2 ==
  char estado2[20];
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
  float area2, pib2;
  int pontosturisticos2;
  float densidadepopulacional2;
  float pibpercapita2;
  float superpoder2;

  // ========================
  // Entrada Carta 1
  // ========================
  printf("=== Cadastro da carta 1 ===\n");

  printf("Estado: \n");
  scanf(" %[^\n]", estado1);

  printf("Codigo (ex: A01): \n");
  scanf("%s", codigo1);

  printf("Nome da cidade: \n");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Área (km²): ");
  scanf("%f", &area1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontosturisticos1);

  // ========================
  // Entrada Carta 2
  // ========================
  printf("\n=== Cadastro da carta 2 ===\n");

  printf("Estado: \n");
  scanf(" %[^\n]", estado2);

  printf("Codigo (ex: B02): \n");
  scanf("%s", codigo2);

  printf("Nome da cidade: \n");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Área (km²): ");
  scanf("%f", &area2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontosturisticos2);

  
  //== CÁLCULOS ==

  densidadepopulacional1 = populacao1 / area1;
  densidadepopulacional2 = populacao2 / area2;

  pibpercapita1 = pib1 / populacao1;
  pibpercapita2 = pib2 / populacao2;

  superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
  superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

  //== EXIBIÇÃO ==
  printf("\n=== CARTAS CADASTRADAS ===\n");

  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);
  printf("Densidade: %.2f\n", densidadepopulacional1);
  printf("PIB per capita: %.2f\n", pibpercapita1);

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);
  printf("Densidade: %.2f\n", densidadepopulacional2);
  printf("PIB per capita: %.2f\n", pibpercapita2);

  
  //== COMPARAÇÃO==
 
  printf("\n=== Comparacao de Cartas ===\n");

  printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);

  // Regra especial
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);

  printf("PIB per capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

  return 0;
}