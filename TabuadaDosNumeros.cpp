/*   ATIVIDADE 11 - ALGORITMOS E PROGRAMAÇÃO   */
// Aluno: Dreyco Santos Benedito.

#include <iostream>
using namespace std;

int main () {

int n;
    cout << "Digite um numero para ver a tabuada do mesmo: ";
    cin >> n;                                   // n = Multiplicando

for (int i = 0; i <= 10; i++) {                 // i = multiplicador
    
int resultado = n * i;
    cout << n << " x " << i << " = " << resultado << '\n';
    cout << "-----------------------\n";

}
    cout << "\n TABUADA GERADA COM SUCESSO!!! \n";
    
return 0;

}