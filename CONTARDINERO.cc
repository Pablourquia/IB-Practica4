#include <iostream>
using namespace std;

int main(){
    int monedas01;
    int monedas05;
    int monedas10;
    int monedas20;
    int monedas50;
    int billetes5;
    int billetes10;
    int billetes20;
    int billetes50;
    int billetes100;
    int billetes200;
    int billetes500;
    cout << "Cuantas monedas de 1 cent tienes?";
    cin >> monedas01;
    cout << "Cuantas monedas de 5 cent tienes?";
    cin >> monedas05;
    cout << "Cuantas monedas de 10 cent tienes?";
    cin >> monedas10;
    cout << "Cuantas monedas de 20 cent tienes?";
    cin >> monedas20;
    cout << "Cuantas monedas de 50 cent tienes?";
    cin >> monedas50;
    cout << "Cuantos billetes de 5 euros tienes?";
    cin >> billetes5;
    cout << "Cuantos billetes de 10 euros tienes?";
    cin >> billetes10;
    cout << "Cuantos billetes de 20 euros tienes?";
    cin >> billetes20;
    cout << "Cuantos billetes de 50 euros tienes?";
    cin >> billetes50;
    cout << "Cuantos billetes de 100 euros tienes?";
    cin >> billetes100;
    cout << "Cuantos billetes de 200 euros tienes?";
    cin >> billetes200;
    cout << "Cuantos billetes de 500 euros tienes?";
    cin >> billetes500;
    cout << "En total tienes "
         << monedas01 * 0.01 + monedas05 * 0.05 + monedas10 * 0.1 + monedas20 * 0.2 + monedas50 * 50 + billetes5 * 5 + billetes10 * 10 + billetes20 * 20 + billetes50 * 50 + billetes100 *100 + billetes200 * 200 + billetes500 * 500
         << " euros" << endl;
}