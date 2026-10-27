<div align="center">

#  [Aplicacao-do-Algoritmo-Bubble-Sort](https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort)

**Organizador de preços de supermercado com o algoritmo Bubble Sort, em linguagem C**

![Linguagem](https://img.shields.io/badge/linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Compilador](https://img.shields.io/badge/compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)
![Algoritmo](https://img.shields.io/badge/algoritmo-Bubble%20Sort-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/status-conclu%C3%ADdo-brightgreen?style=for-the-badge)

</div>

---

##  Sumário

<ol>
  <li><a href="#-1-título-do-projeto">Título do projeto</a></li>
  <li><a href="#-2-disciplina-e-professora">Disciplina e professora</a></li>
  <li><a href="#-3-integrantes">Integrantes</a></li>
  <li><a href="#-4-problema-do-cotidiano-escolhido">Problema do cotidiano escolhido</a></li>
  <li><a href="#-5-objetivo-da-aplicação">Objetivo da aplicação</a></li>
  <li><a href="#-6-como-funciona-o-bubble-sort">Como funciona o Bubble Sort</a></li>
  <li><a href="#-7-como-compilar-e-executar">Como compilar e executar</a></li>
  <li><a href="#-8-exemplo-de-entrada-e-saída">Exemplo de entrada e saída</a></li>
  <li><a href="#-9-tecnologias-e-ferramentas">Tecnologias e ferramentas</a></li>
  <li><a href="#-10-considerações-finais">Considerações finais</a></li>
</ol>

---

##  1. Título do projeto

**[Aplicacao-do-Algoritmo-Bubble-Sort](https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort)**

Atividade prática em grupo de aplicação do algoritmo de ordenação **Bubble Sort** a um problema real do dia a dia.

---

##  2. Disciplina e professora

<table>
  <tr>
    <th align="left">Disciplina</th>
    <td>Algoritmos e Pensamento Computacional</td>
  </tr>
  <tr>
    <th align="left">Professora</th>
    <td>Karla Roberto</td>
  </tr>
  <tr>
    <th align="left">Instituição</th>
    <td>Centro Universitário do Distrito Federal (UDF)</td>
  </tr>
</table>

---

##  3. Integrantes

<table>
  <tr>
    <th>#</th>
    <th align="left">Nome</th>
  </tr>
  <tr><td align="center">1</td><td>Nathaniel</td></tr>
  <tr><td align="center">2</td><td>João Lima</td></tr>
  <tr><td align="center">3</td><td>Caetano</td></tr>
  <tr><td align="center">4</td><td>Vitor</td></tr>
</table>

---

## 🛒 4. Problema do cotidiano escolhido

**Cenário: supermercado.**

Um supermercado precisa listar seus produtos do **mais barato ao mais caro** para facilitar a comparação de preços, a montagem de ofertas e a análise dos valores praticados. Com os preços desordenados, encontrar o item mais barato ou o mais caro exige olhar produto por produto.

A ordenação dos dados é necessária porque, com os preços organizados, a leitura e a tomada de decisão ficam mais rápidas e menos sujeitas a erro, tanto para quem gerencia o estoque quanto para quem compara preços.

<details>
<summary><b>Dados utilizados (10 produtos)</b></summary>
<br>

| Produto | Preço (R$) |
|---------|-----------:|
| Arroz 5kg | 27,90 |
| Feijão 1kg | 8,49 |
| Café 500g | 16,75 |
| Leite 1L | 5,29 |
| Açúcar 1kg | 4,99 |
| Óleo de soja | 7,89 |
| Macarrão 500g | 4,29 |
| Sabão em pó | 18,50 |
| Biscoito | 3,99 |
| Farinha 1kg | 5,49 |

</details>

---

##  5. Objetivo da aplicação

Desenvolver, em **linguagem C**, um programa que:

- armazene os preços de **10 produtos** em um array;
- **ordene automaticamente** os preços de forma **crescente** (menor para maior) usando o **Bubble Sort**, sem funções prontas como `qsort()`;
- exiba os dados **antes** e **depois** da ordenação, informando o critério adotado;
- mostre o produto mais barato, o mais caro e a quantidade de comparações e trocas realizadas.

---

##  6. Como funciona o Bubble Sort

O **Bubble Sort** (ordenação por bolha) percorre o array comparando **pares de elementos adjacentes**. Se um par estiver fora de ordem, os dois **trocam de posição**. A cada passada completa, o maior valor restante "sobe" como uma bolha até o final do array. O processo se repete até que não haja mais trocas.

**Passo a passo:**

1. Compare o elemento da posição `j` com o da posição `j + 1`.
2. Se `preco[j] > preco[j + 1]`, troque os dois de lugar.
3. Avance até o fim da parte ainda não ordenada. Ao final, o maior valor está na posição correta.
4. Repita com um elemento a menos até que o array esteja ordenado (ou até uma passada sem trocas).

**Exemplo de uma passada** com `[5, 3, 8, 1]`:

```text
[5, 3, 8, 1]  → compara 5 e 3 → troca   → [3, 5, 8, 1]
[3, 5, 8, 1]  → compara 5 e 8 → mantém  → [3, 5, 8, 1]
[3, 5, 8, 1]  → compara 8 e 1 → troca   → [3, 5, 1, 8]   ✔ 8 chegou ao final
```

**Trecho principal do código:**

```c
for (int i = 0; i < n - 1; i++) {            // passadas
    int houve_troca = 0;
    for (int j = 0; j < n - i - 1; j++) {    // pares adjacentes
        if (precos[j] > precos[j + 1]) {     // fora de ordem?
            float aux = precos[j];           // troca
            precos[j] = precos[j + 1];
            precos[j + 1] = aux;
            houve_troca = 1;
        }
    }
    if (!houve_troca) break;                 // já ordenado
}
```

>  No código completo, o **nome do produto** também é trocado junto com o preço, para que cada preço continue associado ao produto certo.

<table>
  <tr>
    <th>Característica</th>
    <th>Bubble Sort</th>
  </tr>
  <tr><td>Complexidade (pior caso)</td><td align="center">O(n²)</td></tr>
  <tr><td>Complexidade (melhor caso, com verificação de troca)</td><td align="center">O(n)</td></tr>
  <tr><td>Memória extra</td><td align="center">O(1)</td></tr>
  <tr><td>Estável</td><td align="center">Sim</td></tr>
</table>

---

##  7. Como compilar e executar

**Pré-requisito:** compilador **GCC** instalado.

```bash
# 1. Clonar o repositório
git clone https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort.git
cd Aplicacao-do-Algoritmo-Bubble-Sort

# 2. Compilar
gcc bubble_sort_supermercado.c -o bubble_sort

# 3. Executar
./bubble_sort          # Linux / macOS
bubble_sort.exe        # Windows
```

> Os dados estão definidos no próprio código-fonte; não é necessário digitar nada durante a execução.

---

##  8. Exemplo de entrada e saída

**Entrada** (array definido no código):

```c
precos = {27.90, 8.49, 16.75, 5.29, 4.99, 7.89, 4.29, 18.50, 3.99, 5.49}
```

**Saída no terminal:**

```text
==============================================
   ORGANIZADOR DE PRECOS - SUPERMERCADO
==============================================
Criterio de ordenacao: CRESCENTE (menor -> maior)

--- ANTES da ordenacao ---
   1. Arroz 5kg          R$   27.90
   2. Feijao 1kg         R$    8.49
   3. Cafe 500g          R$   16.75
   4. Leite 1L           R$    5.29
   5. Acucar 1kg         R$    4.99
   6. Oleo de soja       R$    7.89
   7. Macarrao 500g      R$    4.29
   8. Sabao em po        R$   18.50
   9. Biscoito           R$    3.99
  10. Farinha 1kg        R$    5.49

  Comparacoes realizadas: 45
  Trocas realizadas:      32

--- DEPOIS da ordenacao (crescente) ---
   1. Biscoito           R$    3.99
   2. Macarrao 500g      R$    4.29
   3. Acucar 1kg         R$    4.99
   4. Leite 1L           R$    5.29
   5. Farinha 1kg        R$    5.49
   6. Oleo de soja       R$    7.89
   7. Feijao 1kg         R$    8.49
   8. Cafe 500g          R$   16.75
   9. Sabao em po        R$   18.50
  10. Arroz 5kg          R$   27.90

Produto mais barato: Biscoito (R$ 3.99)
Produto mais caro:   Arroz 5kg (R$ 27.90)
```

---

##  9. Tecnologias e ferramentas

<table>
  <tr>
    <th align="left">Ferramenta</th>
    <th align="left">Uso</th>
  </tr>
  <tr><td><b>Linguagem C</b></td><td>Implementação completa da aplicação</td></tr>
  <tr><td><b>GCC</b></td><td>Compilação do código-fonte</td></tr>
  <tr><td><b>Terminal</b></td><td>Execução e exibição dos resultados</td></tr>
  <tr><td><b>Git</b></td><td>Versionamento do código</td></tr>
  <tr><td><b>GitHub</b></td><td>Hospedagem do repositório e trabalho em grupo</td></tr>
</table>

---

##  10. Considerações finais

O desenvolvimento do projeto permitiu praticar, em um problema concreto, os conteúdos da disciplina: **arrays**, **estruturas de repetição**, **estruturas condicionais** e **pensamento computacional**. Implementar o Bubble Sort à mão, sem recorrer a funções prontas, ajudou a entender como as comparações e trocas entre elementos adjacentes levam o array à ordem desejada.

O algoritmo é simples e didático, mas com complexidade O(n²) não é indicado para grandes volumes de dados. Para os 10 produtos deste exemplo, atende bem ao objetivo.

**Possíveis melhorias futuras:**

- permitir que o usuário digite os produtos e preços no terminal;
- oferecer a escolha entre ordem crescente e decrescente;
- ler os dados de um arquivo.

<div align="center">

---

Feito por **Nathaniel, João Lima, Caetano e Vitor** · Algoritmos e Pensamento Computacional · Prof.ª Karla Roberto

</div>
