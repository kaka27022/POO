// Escreva um programa que leia o raio de um circulo e imprima o diametro, area e circunferencia do circulo. Os resultados devem ser 
// escritos com duas casas decimais

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

class Circulo{
    double raio;

    public:
    Circulo(double raio){
        setRaio(raio);
    }

    void setRaio(double raio){
        this->raio = raio;
    }

    void medidas(){
        double diametro = 2*raio;
        double area = M_PI*pow(raio, 2);
        double circunferencia = 2*M_PI*raio;

        cout << fixed << setprecision(2);
        cout << "Resultados: " << endl;
        cout << "\t Diametro = " << diametro << endl;
        cout << "\t Area = " << area << endl;
        cout << "\t Circunferencia = " << circunferencia << endl;
    }
};

int main(){

    double raio;
    cout << "Raio: ";
    cin >> raio;

    Circulo circ(raio);
    circ.medidas();

    return 0;

}