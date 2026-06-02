# Desafio Codeforces — Mentoria Codificadas | Além do Código
 
## Sobre este repositório
 
Este repositório contém minha resolução para o desafio de programação proposto na mentoria, utilizando problemas da plataforma [Codeforces](https://codeforces.com/) com auxílio de Inteligência Artificial.
 
---
 
## Problemas escolhidos
 
| # | Nome do problema | Link | Dificuldade |
|---|-----------------|------|-------------|
| 1 | Yet Another Two Integers Problem | [Ver no Codeforces](https://codeforces.com/problemset/problem/1409/A) | 800 |
 
<!-- Remova as linhas dos problemas que não foram resolvidos caso tenha escolhido menos de 3.-->
 
---
 
## Problema 1 — [Yet Another Two Integers Problem]
 
### O que o problema pede?
<!-- Explique com suas próprias palavras o que o problema pede. Não copie o enunciado. -->
 
 
### Como eu resolvi?
 Traduzi o texto do problema com a ajuda do tradutor da página da Codeforces, Google tradutor e Gemini.
 Em seguida, fiz a leitura e fui confirmando com a IA as informações que interpretei. 
 
 
### Código
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, a, b, distancia;
    
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);

        // 1. Faz a conta e guarda na variável distancia
        distancia = abs(a - b);
         
        // 2. O printf mostra o resultado da fórmula matemática na tela
        printf("%d\n", (distancia + 9) / 10); 
    }
    
    return 0;
}
```
 
---

<!-- Remova as linhas dos problemas que não foram resolvidos caso tenha escolhido menos de 3.-->

---
 
## IA utilizada
 
**Qual IA você usou?**
Eu usei o Gemini. 
 
**Como a IA te ajudou?**
 Primeiramente utilizei a IA para decidir qual linguagem de programação usar para escrever o código, com o objetivo de efetuar o processo de forma mais direta e precisa (visando a programação feita por uma iniciante).
 Ela me deu um exemplo de como escrever o comando int em Python, mas como tive mais contato com a linguagem C, optei por ela. 
 Ela explicou o problema de forma geral e me auxiliou na construção do código com passo a passo, perguntando sobre qual estrutura eu pretendia usar e corrigindo erros conforme eu encaminhava os códigos atualizados.
 
---
 
## Reflexão
 
### Dificuldades encontradas
<!-- O que foi mais difícil? Entender o problema? Escrever o código? Usar o GitHub? -->
 
 
### O que aprendi
<!-- O que você aprendeu de novo com este desafio? Pode ser sobre programação, sobre usar IA, ou qualquer coisa. -->
 
 
### Como foi a experiência?
<!-- Conta um pouco como foi no geral. O que mais gostou? O que mudaria? -->
