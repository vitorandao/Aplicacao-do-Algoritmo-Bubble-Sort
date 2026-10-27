<!-- ================================================ -->
<!--        BUBBLE SORT - SUPERMERCADO                -->
<!--        README otimizado para GitHub              -->
<!-- ================================================ -->

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0F172A,50:1D4ED8,100:38BDF8&height=230&section=header&text=Bubble%20Sort&fontSize=55&fontColor=ffffff&animation=fadeIn&fontAlignY=37&desc=Aplica%C3%A7%C3%A3o%20do%20Algoritmo%20em%20Linguagem%20C&descAlignY=59&descSize=19" width="100%" alt="Banner Bubble Sort"/>

<br/>

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=21&duration=3000&pause=1000&color=38BDF8&center=true&vCenter=true&width=750&lines=Organizando+pre%C3%A7os+de+supermercado.;Compara%C3%A7%C3%B5es+e+trocas+entre+vizinhos.;Linguagem+C+%7C+Arrays+%7C+La%C3%A7os+%7C+Condicionais;Pensamento+computacional+na+pr%C3%A1tica." alt="Typing SVG Bubble Sort"/>

<strong>Algoritmos • Arrays • Pensamento Computacional • Trabalho em Grupo</strong>

</div>

---

<div align="center">

<h2> Título do Projeto</h2>

<h3><a href="https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort">Aplicacao-do-Algoritmo-Bubble-Sort</a></h3>

Atividade prática em grupo que aplica o algoritmo de ordenação <strong>Bubble Sort</strong> a um problema real do dia a dia.

</div>

<br/>

<div align="center">

<h2> Disciplina e Professora</h2>

</div>

<table>
<tr>
<td align="center" width="50%">
<h3> Disciplina</h3>
Algoritmos e Pensamento Computacional
</td>
<td align="center" width="50%">
<h3> Professora</h3>
Karla Roberto
</td>
</tr>
</table>

<br/>

<div align="center">

<h2> Integrantes</h2>

</div>

| # | Integrante |
|:---:|:---|
| 1 | **Nathaniel** |
| 2 | **João Lima** |
| 3 | **Caetano** |
| 4 | **Vitor** |
| 5 | **Mia Kallifer** |

<br/>

<div align="center">

<h2> Problema do Cotidiano Escolhido</h2>

</div>

O cenário escolhido foi o de um **supermercado**. A loja precisa listar seus produtos do **mais barato ao mais caro** para facilitar a comparação de preços, a montagem de ofertas e a análise dos valores praticados.

Com os preços desordenados, achar o item mais barato ou o mais caro exige olhar produto por produto. Com os dados ordenados, a leitura é imediata e a tomada de decisão fica mais rápida e menos sujeita a erros.

<details>
<summary><strong>🧾 Visualizar os dados utilizados (10 produtos)</strong></summary>

<br/>

| Produto | Preço (R$) |
|:---:|:---:|
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

<br/>

<div align="center">

<h2> Objetivo da Aplicação</h2>

</div>

<table>
<tr>
<td align="center" width="50%">
<h3> Armazenar</h3>
Guardar os preços de 10 produtos em um array, junto com os nomes.
</td>
<td align="center" width="50%">
<h3> Ordenar</h3>
Organizar os preços em ordem crescente com o Bubble Sort, sem funções prontas como <code>qsort()</code>.
</td>
</tr>
<tr>
<td align="center">
<h3> Mostrar</h3>
Exibir os dados antes e depois da ordenação, informando o critério adotado.
</td>
<td align="center">
<h3> Analisar</h3>
Apresentar o produto mais barato, o mais caro e o total de comparações e trocas.
</td>
</tr>
</table>

<br/>

<div align="center">

<h2> Como Funciona o Bubble Sort</h2>

O <strong>Bubble Sort</strong> (ordenação por bolha) compara <strong>pares de elementos vizinhos</strong> e troca de posição os que estão fora de ordem. A cada passada, o maior valor restante "sobe" como uma bolha até o final do array.

</div>

| Passo | O que acontece |
|:---:|:---|
| **1** | Compara o elemento da posição `j` com o da posição `j + 1` |
| **2** | Se `preco[j] > preco[j + 1]`, os dois trocam de lugar |
| **3** | Avança até o fim da parte ainda não ordenada; o maior valor fica na posição correta |
| **4** | Repete com um elemento a menos, parando se uma passada não fizer nenhuma troca |

<details>
<summary><strong>🔍 Visualizar exemplo de uma passada</strong></summary>

<br/>

Array inicial `[5, 3, 8, 1]`:

<pre>
[5, 3, 8, 1]  → compara 5 e 3 → troca   → [3, 5, 8, 1]
[3, 5, 8, 1]  → compara 5 e 8 → mantém  → [3, 5, 8, 1]
[3, 5, 8, 1]  → compara 8 e 1 → troca   → [3, 5, 1, 8]   ✔ 8 chegou ao final
</pre>

</details>

<details>
<summary><strong> Visualizar trecho principal do código</strong></summary>

<br/>

<pre>
for (int i = 0; i &lt; n - 1; i++) {            // passadas
    int houve_troca = 0;
    for (int j = 0; j &lt; n - i - 1; j++) {    // pares adjacentes
        if (precos[j] &gt; precos[j + 1]) {     // fora de ordem?
            float aux = precos[j];           // troca
            precos[j] = precos[j + 1];
            precos[j + 1] = aux;
            houve_troca = 1;
        }
    }
    if (!houve_troca) break;                 // já ordenado
}
</pre>

No código completo, o **nome do produto** também é trocado junto com o preço, para que cada preço continue ligado ao produto correto.

</details>

| Característica | Bubble Sort |
|:---:|:---:|
| Complexidade (pior caso) | O(n²) |
| Complexidade (melhor caso, com verificação de troca) | O(n) |
| Memória extra | O(1) |
| Estável | Sim |

<br/>

<div align="center">

<h2> Como Compilar e Executar</h2>

</div>

<details open>
<summary><strong> Visualizar compilação e execução</strong></summary>

<br/>

**Pré-requisito:** compilador **GCC** instalado.

**1. Clone o repositório e entre na pasta**

<pre>
git clone https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort.git
cd Aplicacao-do-Algoritmo-Bubble-Sort
</pre>

**2. Compile o programa**

<pre>
gcc bubble_sort_supermercado.c -o bubble_sort
</pre>

**3. Execute** (Windows: `bubble_sort.exe`)

<pre>
./bubble_sort
</pre>

Os dados já estão definidos no código-fonte, então não é preciso digitar nada durante a execução.

</details>

<br/>

<div align="center">

<h2> Exemplo de Entrada e Saída</h2>

</div>

**Entrada** (array definido no código):

<pre>
precos = {27.90, 8.49, 16.75, 5.29, 4.99, 7.89, 4.29, 18.50, 3.99, 5.49}
</pre>

<details open>
<summary><strong> Visualizar saída no terminal</strong></summary>

<br/>

<pre>
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
</pre>

</details>

<br/>

<div align="center">

<h2> Tecnologias e Ferramentas</h2>

<img src="https://skillicons.dev/icons?i=c,git,github,vscode,linux&theme=dark" alt="Tecnologias do projeto"/>

<br/><br/>

</div>

| Tecnologia | Finalidade |
|:---:|:---|
| **Linguagem C** | Implementação completa da aplicação |
| **GCC** | Compilação do código-fonte |
| **Terminal** | Execução e exibição dos resultados |
| **Git** | Versionamento do código |
| **GitHub** | Hospedagem do repositório e trabalho em grupo |

<br/>

<div align="center">

<h2> Considerações Finais</h2>

</div>

O desenvolvimento permitiu praticar, em um problema concreto, os conteúdos da disciplina: **arrays**, **estruturas de repetição**, **estruturas condicionais** e **pensamento computacional**. Implementar o Bubble Sort à mão, sem funções prontas, ajudou a entender como comparações e trocas entre elementos adjacentes levam o array à ordem desejada.

O algoritmo é simples e didático, mas com complexidade O(n²) não é indicado para grandes volumes de dados. Para os 10 produtos deste exemplo, atende bem ao objetivo.

<details>
<summary><strong> Visualizar melhorias futuras</strong></summary>

<br/>

- Permitir que o usuário digite produtos e preços no terminal.
- Oferecer a escolha entre ordem crescente e decrescente.
- Ler os dados de um arquivo.

</details>

<br/>

<div align="center">

<h2> Desenvolvedores</h2>

<strong>Nathaniel • João Lima • Caetano • Vitor</strong>

Estudantes de Engenharia de Software no Centro Universitário do Distrito Federal (UDF).

<br/>

<a href="https://github.com/vitorandao/Aplicacao-do-Algoritmo-Bubble-Sort">
<img src="https://img.shields.io/badge/GitHub-Aplicacao--do--Algoritmo--Bubble--Sort-181717?style=for-the-badge&logo=github&logoColor=white" alt="Repositório GitHub"/>
</a>

<br/><br/>

<strong>Algoritmos e Pensamento Computacional • Prof.ª Karla Roberto • 2026</strong>

<br/>

<em>Desenvolvido para aprender, evoluir e transformar ideias em soluções reais.</em>

<br/><br/>

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:38BDF8,50:1D4ED8,100:0F172A&height=120&section=footer" width="100%" alt="Rodapé Bubble Sort"/>

</div>
