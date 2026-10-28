#include <stdio.h>

#define TAMANHO 10 /* quantidade de produtos (minimo exigido: 10) */

/* Exibe os produtos e seus precos, um por linha */
void exibir(const char nomes[][20], const float precos[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %2d. %-18s R$ %7.2f\n", i + 1, nomes[i], precos[i]);
    }
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

    printf("--- ANTES da ordenacao ---\n");
    exibir(nomes, precos, TAMANHO);

    return 0;
}
