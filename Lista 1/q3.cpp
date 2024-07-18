// Crie um programa que leia dois numeros inteiros e determine se um é multiplo do outro

#include <iostream>
using namespace std;

bool multiplo(int x, int y){
    if(x > y){
        while(x >= y){
            x = x-y;
        }
        if(x == 0){
            return true;
        } else {
            return false;
        }
    } else if(y >= x){
        while(y > x){
            y = y-x;
        }
        if(y == 0){
            return true;
        } else {
            return false;
        }
    } else {
        return true;
    }
}

int main(){
    int x, y;
    cout << "Digite Numeros: ";
    cin >> x >> y;

    if (multiplo(x, y)){
        cout << "É multiplo!" << endl;
    } else {
        cout << "Nao é multiplo!" << endl;
    }

    return 0;
}