// Escreva um programa que leia 3 inteiros e imprima soma, a media, o produto e o maior e o menor elemento lido

#include <vector>
#include <iostream>
using namespace std;

class Calculadora {
    int x, y, z;
    
    public:

    Calculadora(int x, int y, int z){
        setNumeros(x, y, z);
    }

    void setNumeros(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void calculo(){
        int soma = x+y+z;
        
        double media = soma/3;
        
        int produto = x*y*z;

        vector <int> numeros;
        numeros.push_back(x);
        numeros.push_back(y);
        numeros.push_back(z);

        int maior = numeros[0];
        int menor = numeros[0];

        for(int i = 1; i <= 2; i++){
            if(numeros[i] > maior){
                maior = numeros[i];
            }
            if(numeros[i] < menor){
                menor = numeros[i];
            }
        }

        cout << "Resultados: " << endl;
        cout << "\t Soma = " << soma << endl;
        cout << "\t Media = " << media << endl;
        cout << "\t Produto = " << produto << endl;
        cout << "\t Maior = " << maior << endl;
        cout << "\t Menor = " << menor << endl;
    }

};

int main(){
    int x, y, z;

    cout << "Digite numeros: " << endl;
    cin >> x >> y >> z;

    Calculadora calc(x, y, z);
    calc.calculo();

    return 0;

}