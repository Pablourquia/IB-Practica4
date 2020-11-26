#include <iostream>
using namespace std;

int main(){
    double calificacion1;
    double calificacion2;
    double calificacion3;
    cout << "Cual es la primera calificacion?";
    cin >> calificacion1;
    cout << "Cual es la segunda calificacion?";
    cin >> calificacion2;
    cout << "Cual es la tercera calificacion?";
    cin >> calificacion3;
    cout << "La media de las tres calificaciones es " 
    << (calificacion1 + calificacion2 + calificacion3) / 3 << endl;
    
}