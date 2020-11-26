#include <iostream>
using namespace std;

int main(){

    double euros;
    cout << "Cuantos euros quieres pasar a yenes? " << endl;
    cin >> euros;
    cout << "Son " 
         << euros / 0.0081
         << " yenes" << endl;
}