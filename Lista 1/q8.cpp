// Crie um procedimento que recebaum numero e determine o valor absoluto do mesmo. Utilize referencias

#include <iostream>
#include <cmath>
using namespace std;

void valor_absoluto(float &numero){
    float valorAbsoluto = fabs(numero);
    numero = valorAbsoluto;
}

int main(){
    float numero;
    cout << "Digite um numero: ";
    cin >> numero;

    valor_absoluto(numero);

    cout << "Valor absoluto: " << numero << endl;

    return 0;
}