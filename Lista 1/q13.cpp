// Crie uma funcao soma para numeros inteiros. Sobrecarregue esta funcao para que tambem some numeros reais, vetores de caracteres e vetores
// de inteiros.

#include <vector>
#include <iostream>
using namespace std;

int soma(int &num1, int &num2){
    return num1 + num2;
}

float soma(float &num1, float &num2){
    return num1 + num2;
}

vector <char> soma(vector<char> &vetor1, vector<char> &vetor2){
    vector<char> resultado = vetor1;
    resultado.insert(resultado.end(), vetor2.begin(), vetor2.end());
    return resultado;
}

vector <int> soma(vector<int> &vetor1, vector<int> &vetor2){
    vector<int> resultado = vetor1;
    resultado.insert(resultado.end(), vetor2.begin(), vetor2.end());
    return resultado;
}

int main(){

    int num1 = 1;
    int num2 = 2;

    int soma_int = soma(num1, num2);

    float num3 = 6.4;
    float num4 = 9.6;

    float soma_float = soma(num3, num4);

    cout << soma_int << endl;
    cout << soma_float << endl;

    return 0;

}