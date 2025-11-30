#include <stdio.h>
#include <string.h>

// Definindo a estrutura Territorio usando typedef para facilitar a declaração
// Essa struct agrupa dados relacionados (nome, cor, tropas) em um bloco único.
typedef struct {
    char nome[30];  // Nome do território (ex: 'Brasil', 'Argélia')
    char cor[10];   // Cor do exército (ex: 'Vermelho', 'Azul')
    int tropas;     // Quantidade de tropas alocadas
} Territorio;

int main() {
    // Declaração de um vetor de structs com capacidade para 5 territórios
    // O vetor é uma estrutura linear que armazena as informações de forma organizada.
    Territorio mapa[5]; 
    int i; // Variável de controle para os laços for

    printf("=== CADASTRO DE TERRITÓRIOS (WAR ESTRUTURADO) ===\n");
    
    // --- 1. Entrada dos dados (Cadastro) ---
    // O laço for é usado para percorrer o vetor e preencher os dados dos 5 territórios.
    for (i = 0; i < 5; i++) {
        printf("\nCadastro do Território %d de 5:\n", i + 1);

        // Entrada do Nome
        printf("Digite o nome do Território: ");
        // Usamos scanf com formato de string para ler a palavra (sem espaços)
        // O campo do nome é acessado pela notação ponto: mapa[i].nome
        scanf("%s", mapa[i].nome); 

        // Entrada da Cor
        printf("Digite a cor do Exército (ex: Vermelho): ");
        scanf("%s", mapa[i].cor);

        // Entrada das Tropas
        printf("Digite a quantidade de Tropas (número inteiro): ");
        // O campo das tropas é do tipo int
        scanf("%d", &mapa[i].tropas);
    }

    // --- 2. Exibição dos dados ---
    printf("\n=== TERRITÓRIOS CADASTRADOS ===\n");
    
    // Percorre o vetor novamente para exibir os dados de cada território.
    for (i = 0; i < 5; i++) {
        printf("-------------------------------\n");
        printf("Território: %s\n", mapa[i].nome);
        printf("Cor: %s\n", mapa[i].cor);
        printf("Tropas: %d\n", mapa[i].tropas);
    }
    printf("-------------------------------\n");

    return 0;
}