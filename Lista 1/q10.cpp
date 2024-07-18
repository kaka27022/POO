// Crie um programa que armazene 12 numeros em um vetor alocado dinamicamente e determine qual a porcentagem de numeros menores que 8 e qual a porcentagem 
// de numeros maiores que 10. Utilize os operadores new e delete

#include <iostream>
using namespace std;

void porcentagem(float &num){
    float porcentagem = 100*num/12;
    num = porcentagem;
}

int main(){
    
    float *vetor = new float[12];
    float menores_oito = 0;
    float maiores_dez = 0;

    for(int i = 0; i < 12; ++i){
        cout << "Digite um numero: ";
        cin >> vetor[i];
        if(vetor[i] < 8){
            menores_oito++;
        } else if(vetor[i] > 10){
            maiores_dez++;
        }
    }

    porcentagem(menores_oito);
    porcentagem(maiores_dez);

    cout << "Porcentegem menores que 8: " << menores_oito << "%" << endl;
    cout << "Porcentagem maiores que 10: " << maiores_dez << "%" << endl;

    delete[] vetor;

    return 0;
    
}