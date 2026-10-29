/*
  Organizador de precos de um supermercado.
  Ordena 10 produtos do menor preco para o maior (ordem crescente).

  Para compilar: gcc -Wall -Wextra bubble_sort_supermercado.c -o bubble_sort
  Para executar: ./bubble_sort
*/

#include <stdio.h>

#define TAMANHO 10

/* Mostra o nome e o preco de cada produto */
void exibir(const char nomes[][20], const float precos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%2d. %-18s R$ %.2f\n", i + 1, nomes[i], precos[i]);
    }
}

/* Ordena os precos e mantem os nomes junto dos produtos */
void bubble_sort(char nomes[][20], float precos[], int n) {
    int comparacoes = 0;
    int trocas = 0;

    /* O primeiro for controla as passadas */
    for (int i = 0; i < n - 1; i++) {
        int houve_troca = 0;

        /* O segundo for compara produtos vizinhos */
        for (int j = 0; j < n - i - 1; j++) {
            comparacoes++;

            /* Se o preco da esquerda for maior, troca os dois */
            if (precos[j] > precos[j + 1]) {
                float aux = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = aux;

                /* Troca os nomes para acompanhar os precos */
                char aux_nome[20];
                for (int k = 0; k < 20; k++) {
                    aux_nome[k] = nomes[j][k];
                    nomes[j][k] = nomes[j + 1][k];
                    nomes[j + 1][k] = aux_nome[k];
                }

                trocas++;
                houve_troca = 1;
            }
        }

        /* Se nada foi trocado, a lista ja esta ordenada */
        if (houve_troca == 0) {
            break;
        }
    }

    printf("\nComparacoes realizadas: %d\n", comparacoes);
    printf("Trocas realizadas: %d\n", trocas);
}

int main(void) {
    char nomes[TAMANHO][20] = {
        "Arroz 5kg", "Feijao 1kg", "Cafe 500g", "Leite 1L", "Acucar 1kg",
        "Oleo de soja", "Macarrao 500g", "Sabao em po", "Biscoito", "Farinha 1kg"
    };

    float precos[TAMANHO] = {
        27.90f, 8.49f, 16.75f, 5.29f, 4.99f,
        7.89f, 4.29f, 18.50f, 3.99f, 5.49f
    };

    printf("ORGANIZADOR DE PRECOS - SUPERMERCADO\n");
    printf("Criterio de ordenacao: CRESCENTE (menor para maior)\n");

    printf("\n--- ANTES da ordenacao ---\n");
    exibir(nomes, precos, TAMANHO);

    bubble_sort(nomes, precos, TAMANHO);

    printf("\n--- DEPOIS da ordenacao (crescente) ---\n");
    exibir(nomes, precos, TAMANHO);

    /* Depois da ordenacao, o primeiro e o mais barato e o ultimo e o mais caro */
    printf("\nProduto mais barato: %s (R$ %.2f)\n", nomes[0], precos[0]);
    printf("Produto mais caro: %s (R$ %.2f)\n", nomes[TAMANHO - 1], precos[TAMANHO - 1]);

    return 0;
}
