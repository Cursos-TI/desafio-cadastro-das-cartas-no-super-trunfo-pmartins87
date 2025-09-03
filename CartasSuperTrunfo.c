#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Aluno: Paulo Martins Barbosa Junior

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // --- Declaração de Variáveis ---
    // Para cada carta, criamos um conjunto de variáveis para armazenar seus respectivos atributos.
    
    // Variáveis para a Carta 1
    char estado1;
    char cidade1[3]; // 01 a 04 + caractere nulo '\0'
    int populacao1;
    float area1;
    float pib1;
    int nPontosTur1;

    // Variáveis para a Carta 2
    char estado2;
    char cidade2[3]; // 01 a 04 + caractere nulo '\0'
    int populacao2;
    float area2;
    float pib2;
    int nPontosTur2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // --- Cadastro da Carta 1 ---
    // 'printf' mostra as instruções e 'scanf' lê o que o usuário digita.
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf("%c", &estado1);

    printf("Digite a Cidade (de 01 a 04): ");
    scanf("%s", cidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &nPontosTur1);

    printf("\nCarta 1 cadastrada com sucesso!\n\n");

    // --- Cadastro da Carta 2 ---
    // Repetimos o mesmo processo de cadastro

    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf("%c", &estado2);

    printf("Digite a Cidade (de 01 a 04): ");
    scanf("%s", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &nPontosTur2);

    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // --- Exibição dos Dados das Cartas ---
    printf("Relação de Cartas Cadastradas:\n\n");
    // Exibindo dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTur1);

    printf("\n"); // Adiciona uma linha em branco

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", nPontosTur2);

    printf("\n\nFim da Relação de Cartas Cadastradas");

    return 0;
}
