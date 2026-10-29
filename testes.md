# Testes do programa Bubble Sort em C

Os cinco cenários foram testados com GCC (`gcc -Wall -Wextra`) usando cópias temporárias do arquivo principal, substituindo somente o array de preços de entrada. O código do repositório não foi alterado durante esses testes.

| Caso | Preços de entrada (R$) | Comparações | Trocas | Resultado |
|---|---|---:|---:|---|
| 1. Dados originais | 27.90, 8.49, 16.75, 5.29, 4.99, 7.89, 4.29, 18.50, 3.99, 5.49 | 45 | 32 | Ordenou corretamente |
| 2. Já ordenado | 3.99, 4.29, 4.99, 5.29, 5.49, 7.89, 8.49, 16.75, 18.50, 27.90 | 9 | 0 | Parada antecipada |
| 3. Ordem inversa | 27.90, 18.50, 16.75, 8.49, 7.89, 5.49, 5.29, 4.99, 4.29, 3.99 | 45 | 45 | Ordenou corretamente |
| 4. Todos iguais | 5.00 em todas as 10 posições | 9 | 0 | Sem trocas; parada antecipada |
| 5. Preços repetidos | 5.49, 3.99, 5.49, 3.99, 8.49, 8.49, 3.99, 5.49, 8.49, 3.99 | 42 | 15 | Ordenou corretamente |

## O que foi verificado

1. A saída contém 10 produtos antes e depois da ordenação.
2. Os preços após a ordenação ficam em ordem crescente.
3. A troca de preço é acompanhada pela troca do nome correspondente.
4. A parada antecipada reduz comparações em entradas que já estão ordenadas.
5. Os contadores registram os valores esperados em cada caso.

**Observação:** nos cenários 2 a 5, alterar o array inicial de preços faz com que cada nome passe a representar o novo preço de sua respectiva posição inicial. Isso é intencional para o teste; a associação entre nome e preço é preservada durante a ordenação.

**Conclusão:** os cinco casos produziram os resultados esperados e a compilação com `-Wall -Wextra` não apresentou avisos. Não foram feitos commits.
