/*   TREINANDO - ALGORITMOS E PROGRAMAÇÃO   */
// CRIADOR: Dreyco Santos Benedito.

#include <iostream>                  // Inclui a biblioteca padrão para entrada/saída (cout, cin)
using namespace std;                 // Evita precisar escrever std:: antes de cout e cin

int main() {                         // Função principal: ponto de entrada do programa
    cout << "Aqui estao os numeros PARES entre 1 e 100:\n\n";  // Mensagem inicial

    int contador = 0;                // Variável para contar quantos números pares foram exibidos

    // Laço for começando em 2 (primeiro par) e indo até 100, de 2 em 2 (somente pares)
    for (int i = 2; i <= 100; i += 2) {
        cout << i;                   // Imprime o número par atual

        // Imprime vírgula e espaço se ainda não chegou ao último número (100); caso contrário, ponto final
        if (i < 100) {
            cout << ", ";
        } else {
            cout << ".";
        }

        contador++;                  // Incrementa o contador a cada número par impresso
    }

    // Separador visual para destacar o resumo ao final
    cout << "\n\n-------------------------------------\n"; 

    // Exibe a quantidade total de números pares encontrados no intervalo
    cout << "Ha " << contador << " numeros PARES entre 1 e 100!!!\n";

    // Outro separador visual
    cout << "-------------------------------------\n";

    return 0;                        // Indica que o programa terminou com sucesso
}
