#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // =================================================================
    // Nível Novato - Posicionamento dos Navios
    // =================================================================
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    printf("=== NIVEL NOVATO ===\n\n");
    
    // Declaração da matriz 10x10 para o tabuleiro
    int tabuleiro_novato[10][10] = {0}; // Inicializa todas as posições com 0 (água)
    
    // Navio 1: Posicionamento VERTICAL (tamanho 3)
    // Coluna 2, linhas 1 a 3
    tabuleiro_novato[1][2] = 3;
    tabuleiro_novato[2][2] = 3;
    tabuleiro_novato[3][2] = 3;
    
    // Navio 2: Posicionamento HORIZONTAL (tamanho 3)
    // Linha 5, colunas 4 a 6
    tabuleiro_novato[5][4] = 3;
    tabuleiro_novato[5][5] = 3;
    tabuleiro_novato[5][6] = 3;
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas do Navio 1 (Vertical):\n");
    printf("Posicao 1: (1, 2)\n");
    printf("Posicao 2: (2, 2)\n");
    printf("Posicao 3: (3, 2)\n\n");
    
    printf("Coordenadas do Navio 2 (Horizontal):\n");
    printf("Posicao 1: (5, 4)\n");
    printf("Posicao 2: (5, 5)\n");
    printf("Posicao 3: (5, 6)\n\n");

    // =================================================================
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // =================================================================
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    printf("\n=== NIVEL AVENTUREIRO ===\n\n");
    
    // Declaração da matriz 10x10 para o tabuleiro expandido
    int tabuleiro_aventureiro[10][10] = {0}; // Inicializa todas as posições com 0 (água)
    
    // Navio 1: Posicionamento VERTICAL (tamanho 3)
    // Coluna 1, linhas 0 a 2
    tabuleiro_aventureiro[0][1] = 3;
    tabuleiro_aventureiro[1][1] = 3;
    tabuleiro_aventureiro[2][1] = 3;
    
    // Navio 2: Posicionamento HORIZONTAL (tamanho 3)
    // Linha 5, colunas 5 a 7
    tabuleiro_aventureiro[5][5] = 3;
    tabuleiro_aventureiro[5][6] = 3;
    tabuleiro_aventureiro[5][7] = 3;
    
    // Navio 3: Posicionamento DIAGONAL PRINCIPAL (tamanho 3)
    // Posições (7,7), (8,8), (9,9)
    tabuleiro_aventureiro[7][7] = 3;
    tabuleiro_aventureiro[8][8] = 3;
    tabuleiro_aventureiro[9][9] = 3;
    
    // Navio 4: Posicionamento DIAGONAL SECUNDÁRIA (tamanho 3)
    // Posições (0,9), (1,8), (2,7)
    tabuleiro_aventureiro[0][9] = 3;
    tabuleiro_aventureiro[1][8] = 3;
    tabuleiro_aventureiro[2][7] = 3;
    
    // Exibição do tabuleiro completo 10x10
    printf("Tabuleiro 10x10 com 4 navios:\n");
    printf("(0 = agua, 3 = navio)\n\n");
    
    // Loops aninhados para exibir o tabuleiro
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro_aventureiro[i][j]);
        }
        printf("\n");
    }

    // =================================================================
    // Nível Mestre - Habilidades Especiais com Matrizes
    // =================================================================
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    
    printf("\n=== NIVEL MESTRE ===\n\n");
    
    // Habilidade 1: CONE
    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    printf("Habilidade CONE:\n");
    printf("(0 = nao afetado, 1 = afetado)\n\n");
    
    int cone[5][5] = {0}; // Inicializa a matriz 5x5 com zeros
    
    // Utiliza estruturas de repetição aninhadas com condicionais para preencher o padrão cone
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // Condicional para definir a área afetada em formato de cone
            // Linha 0: apenas posição central (j == 2)
            // Linha 1: posições 1, 2, 3 (j >= 1 && j <= 3)
            // Linha 2: todas as posições (j >= 0 && j <= 4)
            if(i == 0 && j == 2) {
                cone[i][j] = 1;
            } else if(i == 1 && (j >= 1 && j <= 3)) {
                cone[i][j] = 1;
            } else if(i == 2) {
                cone[i][j] = 1;
            }
        }
    }
    
    // Exibe apenas as 3 primeiras linhas do cone
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    
    // Habilidade 2: OCTAEDRO
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    
    printf("\nHabilidade OCTAEDRO:\n");
    printf("(0 = nao afetado, 1 = afetado)\n\n");
    
    int octaedro[5][5] = {0}; // Inicializa a matriz 5x5 com zeros
    
    // Utiliza estruturas de repetição aninhadas com condicionais para preencher o padrão octaedro
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // Condicional para definir a área afetada em formato de octaedro (losango)
            // Linha 0: apenas centro (j == 2)
            // Linha 1: posições 1, 2, 3 (j >= 1 && j <= 3)
            // Linha 2: apenas centro (j == 2)
            if(i == 0 && j == 2) {
                octaedro[i][j] = 1;
            } else if(i == 1 && (j >= 1 && j <= 3)) {
                octaedro[i][j] = 1;
            } else if(i == 2 && j == 2) {
                octaedro[i][j] = 1;
            }
        }
    }
    
    // Exibe apenas as 3 primeiras linhas do octaedro
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    
    // Habilidade 3: CRUZ
    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    
    printf("\nHabilidade CRUZ:\n");
    printf("(0 = nao afetado, 1 = afetado)\n\n");
    
    int cruz[5][5] = {0}; // Inicializa a matriz 5x5 com zeros
    
    // Utiliza estruturas de repetição aninhadas com condicionais para preencher o padrão cruz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            // Condicional para definir a área afetada em formato de cruz
            // Linha 0 e 2: apenas coluna central (j == 2)
            // Linha 1: toda a linha horizontal
            if((i == 0 || i == 2) && j == 2) {
                cruz[i][j] = 1;
            } else if(i == 1) {
                cruz[i][j] = 1;
            }
        }
    }
    
    // Exibe apenas as 3 primeiras linhas da cruz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n=== DESAFIO CONCLUIDO COM SUCESSO ===\n");

    return 0;
}
