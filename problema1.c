#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Variáveis necessárias para a resolução do problema
    int t, a, b, distancia;
    
    scanf("%d", &t); // Lê a quantidade total de casos de teste
    while (t--) { // Laço que repete o processo para cada caso de teste
        scanf("%d %d", &a, &b); // Lê os valores de 'a' (início) e 'b' (alvo)


        // Faz a conta e guarda na variável distancia
        distancia = abs(a - b);
         
        // O printf mostra o resultado da fórmula matemática na tela
        printf("%d\n", (distancia + 9) / 10); 
    }
    
    return 0;
}