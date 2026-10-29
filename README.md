<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0F172A,50:1D4ED8,100:38BDF8&height=210&section=header&text=Bubble%20Sort&fontSize=54&fontColor=ffffff&animation=fadeIn&fontAlignY=38&desc=Organizacao%20de%20precos%20de%20supermercado%20em%20C&descAlignY=62&descSize=18" width="100%" alt="Banner Bubble Sort"/>

**Algoritmos e Pensamento Computacional | Trabalho em grupo | 2026**

</div>

# Aplicação do Algoritmo Bubble Sort em C

## 1. Identificação do trabalho

- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Karla Roberto
- **Linguagem:** C
- **Tema:** organização dos preços de produtos de um supermercado
- **Repositório:** [Aplicacao-do-Algoritmo-Bubble-Sort](https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort)

### Integrantes

| Integrante | Perfil no GitHub |
|---|---|
| Nathaniel | [@nathanielmendes02-lab](https://github.com/nathanielmendes02-lab) |
| João Lima | [@limazk](https://github.com/limazk) |
| Caetano | [@Pafunso](https://github.com/Pafunso) |
| Vitor | [@vitorandao](https://github.com/vitorandao) |

## 2. Problema do cotidiano

Um supermercado precisa organizar seus produtos do **mais barato para o mais caro**. Uma lista desordenada dificulta a comparação de preços e a identificação de ofertas. O programa resolve esse problema organizando 10 produtos em **ordem crescente de preço**, sem separar cada nome de seu valor.

## 3. Objetivo

Criar uma aplicação simples em C que armazena 10 produtos e seus preços, mostra a lista antes da ordenação, utiliza o **Bubble Sort**, apresenta a lista depois da ordenação e identifica o item mais barato e o mais caro. A aplicação também informa quantas comparações e trocas foram realizadas.

## 4. Dados utilizados

| Produto | Preço inicial |
|---|---:|
| Arroz 5kg | R$ 27,90 |
| Feijao 1kg | R$ 8,49 |
| Cafe 500g | R$ 16,75 |
| Leite 1L | R$ 5,29 |
| Acucar 1kg | R$ 4,99 |
| Oleo de soja | R$ 7,89 |
| Macarrao 500g | R$ 4,29 |
| Sabao em po | R$ 18,50 |
| Biscoito | R$ 3,99 |
| Farinha 1kg | R$ 5,49 |

Os nomes ficam no array `nomes` e os preços no array `precos`. O produto na posição `i` de um array corresponde ao valor na posição `i` do outro.

## 5. Como funciona o Bubble Sort

O Bubble Sort compara elementos vizinhos. Se o preço atual é maior que o próximo, os dois preços trocam de posição **junto com os nomes dos produtos**. O processo se repete até ordenar a lista. Quando uma passada não realiza nenhuma troca, o algoritmo encerra antecipadamente.

**Trecho central simplificado:**

```c
for (int i = 0; i < n - 1; i++) {
    int houve_troca = 0;
    for (int j = 0; j < n - i - 1; j++) {
        if (precos[j] > precos[j + 1]) {
            // troca os precos e seus nomes correspondentes
            houve_troca = 1;
        }
    }
    if (houve_troca == 0) {
        break;
    }
}
```

O código completo e executável está em [`bubble_sort_supermercado.c`](bubble_sort_supermercado.c).

- **Critério:** crescente (menor para maior).
- **Pior caso:** O(n²), com até 45 comparações para 10 itens.
- **Melhor caso com parada antecipada:** O(n), quando já está ordenado.
- **Vantagem:** fácil de compreender para listas pequenas.
- **Limitação:** não é adequado para grandes quantidades de registros.

## 6. Como compilar e executar

É necessário ter um compilador GCC instalado.

**1. Baixe o projeto:**

```bash
git clone https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort.git
cd Aplicacao-do-Algoritmo-Bubble-Sort
```

**2. Compile:**

```bash
gcc -Wall -Wextra bubble_sort_supermercado.c -o bubble_sort
```

**3. Execute:**

- Linux/macOS: `./bubble_sort`
- Windows (PowerShell): `.\bubble_sort.exe`

Não é preciso digitar produtos: os 10 registros já estão no código.

## 7. Exemplo de execução

Saída verificada com o arquivo `bubble_sort_supermercado.c`, compilado com GCC:

```text
ORGANIZADOR DE PRECOS - SUPERMERCADO
Criterio de ordenacao: CRESCENTE (menor para maior)

--- ANTES da ordenacao ---
 1. Arroz 5kg          R$ 27.90
 2. Feijao 1kg         R$ 8.49
 3. Cafe 500g          R$ 16.75
 4. Leite 1L           R$ 5.29
 5. Acucar 1kg         R$ 4.99
 6. Oleo de soja       R$ 7.89
 7. Macarrao 500g      R$ 4.29
 8. Sabao em po        R$ 18.50
 9. Biscoito           R$ 3.99
10. Farinha 1kg        R$ 5.49

Comparacoes realizadas: 45
Trocas realizadas: 32

--- DEPOIS da ordenacao (crescente) ---
 1. Biscoito           R$ 3.99
 2. Macarrao 500g      R$ 4.29
 3. Acucar 1kg         R$ 4.99
 4. Leite 1L           R$ 5.29
 5. Farinha 1kg        R$ 5.49
 6. Oleo de soja       R$ 7.89
 7. Feijao 1kg         R$ 8.49
 8. Cafe 500g          R$ 16.75
 9. Sabao em po        R$ 18.50
10. Arroz 5kg          R$ 27.90

Produto mais barato: Biscoito (R$ 3.99)
Produto mais caro: Arroz 5kg (R$ 27.90)
```

O **Biscoito (R$ 3,99)** foi o mais barato; o **Arroz 5kg (R$ 27,90)** foi o mais caro. No exemplo original, ocorreram **45 comparações e 32 trocas**.

## 8. Testes

A validação considerou cinco casos: entrada desordenada, já ordenada, ordem inversa, preços iguais e preços repetidos. Os resultados foram conferidos por compilação e execução em cópias temporárias do programa.

| Caso | Comparações | Trocas |
|---|---:|---:|
| 10 produtos do exemplo | 45 | 32 |
| Preços já ordenados | 9 | 0 |
| Preços em ordem inversa | 45 | 45 |
| Todos os preços iguais | 9 | 0 |
| Alguns preços repetidos | 42 | 15 |

**Documentação dos testes:** [`testes.md`](testes.md). O arquivo deve estar presente no repositório para o link funcionar.

## 9. Tecnologias e organização

- **C:** programa, arrays, laços e condicionais.
- **GCC:** compilação.
- **Git e GitHub:** colaboração e histórico de alterações.
- **`bubble_sort_supermercado.c`:** programa principal.
- **`README.md`:** explicação e instruções do projeto.
- **`testes.md`:** documentação dos cinco casos de teste (adicionar ao repositório).
- **`.gitignore`:** impede o envio de executáveis gerados (adicionar ao repositório).

## 10. Conclusão

A aplicação demonstra o funcionamento do Bubble Sort em um problema real e simples. Foram utilizados arrays, repetição, condições e troca de valores, preservando a associação entre os nomes e os preços. A lista final facilita a comparação dos produtos. O projeto tem finalidade didática e pode evoluir para aceitar produtos digitados pelo usuário e outros algoritmos de ordenação.

> **Escopo desta versão:** apenas Bubble Sort. Se o enunciado oficial solicitar também Quick Sort, essa implementação ainda precisa ser adicionada antes da entrega da atividade completa.

---

<div align="center">

**Desenvolvido por Nathaniel, João Lima, Caetano e Vitor — 2026**

</div>
