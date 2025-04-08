#include <iostream>
using namespace std;

int main (){

    int salario, salarioB;

    cout << "Programa que calcula o salario final apos os impostos e grtifição"<< endl;


    cout << "Informe seu salario base: ";
    cin >> salario;
    salarioB = (salario + 50) - (salario * 0,10);
    cout << "\nSeu salario finla é: "<< salarioB <<endl;


    return 0;
}