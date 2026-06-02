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
<!-- Descreva a estratégia que você usou. Por exemplo: ordenei a lista, filtrei os negativos, etc. -->
 
 
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
<!-- Descreva como você usou a IA no processo. Ela explicou o problema? Sugeriu uma estratégia? Ajudou a corrigir um erro? -->
 
---
 
## Reflexão
 
### Dificuldades encontradas
<!-- O que foi mais difícil? Entender o problema? Escrever o código? Usar o GitHub? -->
 
 
### O que aprendi
<!-- O que você aprendeu de novo com este desafio? Pode ser sobre programação, sobre usar IA, ou qualquer coisa. -->
 
 
### Como foi a experiência?
<!-- Conta um pouco como foi no geral. O que mais gostou? O que mudaria? -->
