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
    char codigo1[4]; // Ex: "A01" + caractere nulo '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4]; // Ex: "B02" + caractere nulo '\0'
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // --- Cadastro da Carta 1 ---
    // 'printf' mostra as instruções e 'scanf' lê o que o usuário digita.
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (uma letra, ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da cidade (ex: A01): ");
    scanf("%c", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%c", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 1 cadastrada com sucesso!\n\n");

    // --- Cadastro da Carta 2 ---
    // Repetimos o mesmo processo de cadastro

    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (uma letra, ex: B): ");
    scanf("%c", &estado2);

    printf("Digite o Codigo da cidade (ex: B02): ");
    scanf("%c", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // --- Exibição dos Dados das Cartas ---

    // Exibindo dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c\n", codigo1);
    printf("Nome da Cidade: %c\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n"); // Adiciona uma linha em branco

    // Exibindo dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c\n", codigo2);
    printf("Nome da Cidade: %c\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
