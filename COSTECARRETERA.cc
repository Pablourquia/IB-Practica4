#include <iostream>
using namespace std;

int main(){

    double longitud;
    cout << "Cuantos metros tiene la carretera? " << endl;
    cin >> longitud;
    cout << "La carretera costara " 
         << 1624 * longitud
         << " euros" << endl;
}