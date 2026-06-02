# Desafio Codeforces — Mentoria Codificadas | Além do Código
 
## Sobre este repositório
 
Este repositório contém minha resolução para o desafio de programação proposto na mentoria, utilizando problemas da plataforma [Codeforces](https://codeforces.com/) com auxílio de Inteligência Artificial.
 
---
 
## Problema escolhido
 
| # | Nome do problema | Link | Dificuldade |
|---|-----------------|------|-------------|
| 1 | Yet Another Two Integers Problem | [Ver no Codeforces](https://codeforces.com/problemset/problem/1409/A) | 800 |
 
---
 
## Problema 1 — [Yet Another Two Integers Problem]
 
### O que o problema pede?
O problema é como se fosse um jogo onde é preciso descobrir quantos movimentos são necessários para que o valor de a seja o mesmo de b utilizando cálculos matemáticos.
 
 
### Como eu resolvi?
 Traduzi o texto do problema com a ajuda do tradutor da página da Codeforces, Google tradutor e Gemini.
 Em seguida, fiz a leitura e fui confirmando com a IA as informações que interpretei. 
 Para resolver sem usar laços demorados, a estratégia foi calcular a distância absoluta entre os dois números e dividi-la pelo tamanho máximo do passo (10), utilizando um truque matemático para sempre arredondar o resultado para cima quando há resto.
 
 
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
 Entender o problema foi um pouco mais difícil por ter que interpretá-lo imaginando como transformá-lo em código respeitando a todas as solicitações.
 Como inicialmente realizei a instalação do Python pensando em usá-lo para escrever o código e depois mudei de ideia, também tive que utilizar o tempo para instalar o C no computador. 
 
### O que aprendi
 Aprendi a criar portifólio no Github, realizar publicações no Linkedin, instalar e configurar programas no Linux.
 Também aprendi que, apesar de querer tentar programar com uma nova linguagem, devemos primeiramente dominar a estrutura do código e ter experiência com a linguagem que já conhecemos (é como tentar dominar um novo idioma sem saber o nativo).
 
 
### Como foi a experiência?
 A experiência foi emocionante por me proporcionar a compreensão de como realmente funciona o trabalho de programação. 
 Com essa oportunidade, consegui entender quais são as formas que posso usar para me aperfeiçoar na área.
 Eu mudaria o prazo da entrega da atividade para um prazo mais longo (visando mais tempo e oportunidade de entrega de mais problemas, devido a necessidade de conciliação desse estudo com os demais compromissos do dia a dia). 
