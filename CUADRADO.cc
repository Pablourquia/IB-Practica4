#include <iostream>
using namespace std;

int main(){
    double lado;
    cout << "Cual es el lado del cuadrado?";
    cin >> lado;
    cout << "El area es "
    << lado * lado
    << " y el perimetro es "
    << lado * 4 << endl;
}