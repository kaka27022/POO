// Escreva um programa que le 15 numeros reais e atraves de uma funcao determine quais sao os dois
// maiores deles, que nao devem ser repetidos. Nao utilize vetores e utilize referencias

#include <iostream>
using namespace std;

void encontra_dois_maiores(double &maior, double &segundo_maior){
    maior = segundo_maior = -1.0/0.0;

    for(int i = 0; i < 15; ++i){
        double numero;
        cout << "Digite um numero real: ";
        cin >> numero;

        if(numero > maior){
            segundo_maior = maior;
            maior = numero;
        } else if(numero > segundo_maior && numero != maior){
            segundo_maior = numero;
        }
    }
}

int main(){
    double maior, segundo_maior;
    encontra_dois_maiores(maior, segundo_maior);

    cout << "O maior numero é: " << maior << endl;
    cout << "O segundo maior é: " << segundo_maior << endl;

    return 0;
}