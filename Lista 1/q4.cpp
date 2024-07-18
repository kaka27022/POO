// Sabemos que cout nao utiliza formatadores. Escreva um programa que le um caractere e retorna seu
// codigo na tabela ASCII (um numero inteiro). Pesquise por static cast

#include <string>
#include <iostream>
using namespace std;

int main(){
    char carac;
    cin >> carac;

    // Static_cast -> converter variaveis
    int valor_ascii = static_cast<int>(carac);

    cout << "O valor ASCII: " << valor_ascii << endl;

    return 0;
}