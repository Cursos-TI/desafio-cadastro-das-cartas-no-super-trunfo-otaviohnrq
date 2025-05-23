/*
 * Programa: Cadastro de Cartas do Jogo Super Trunfo - Nível Novato - Tema: Países
 * Autor: Otávio Henrique Maia Santos
 * Data: 21/05/2025
 * Descrição: Este programa permite o cadastro e exibição de informações de duas cartas
 * do jogo Super Trunfo, com tema de cidades brasileiras. Cada carta contém:
 * - Estado (A a H)
 * - Código (letra do estado + número da cidade)
 * - Nome da cidade
 * - População
 * - Área
 * - PIB
 * - Número de pontos turísticos
 *
 * O programa lê os dados via terminal, armazena em variáveis apropriadas e exibe
 * as informações de forma formatada.
 */


#include <stdio.h>

int main() { // Declaração de variáveis
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: 01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
