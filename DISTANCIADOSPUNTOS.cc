#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x1;
    double y1;
    double z1;
    double x2;
    double y2;
    double z2;
    cout << "Dime las coordenadas x, y y z del primer punto";
    cin >> x1;
    cin >> y1;
    cin >> z1;
    cout << "Dime las coordenadas x , y y z del segundo punto";
    cin >> x2;
    cin >> y2;
    cin >> z2;
    cout << "La distancia entre esos dos puntos es "
    << sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1)) <<endl;
}