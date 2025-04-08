#include <iostream>
using namespace std;

int main (){

    float area, b, H;

    cout << "Programa que calcula a area de um triangulo qualquer: " << endl;


    cout << "Informe a base do triangulo: ";
    cin >> b;
    cout << "\nInforme a altura do triangulo: ";
    cin >> H;

    area = (b*H)/2;
    cout << "\nA area do triangulo é igual a: " << area <<endl;


    

    return 0;
}