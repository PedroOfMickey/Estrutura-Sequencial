#include <iostream>
using namespace std;

int main(){
    float dinheiro, juros, valorF;
    cout << "Programa que calcula o redimento do dinheiro de acordo com a taxa de juros"<<endl;

    cout << "Informe o valor a ser depositado: ";
    cin >> dinheiro;

    cout << "\nInforme a taxa de juros: ";
    cin >> juros;
    juros = (juros/100);

    valorF = dinheiro + (juros *dinheiro);
    cout << "O valor final sera de: " << valorF <<endl;


    return 0;
}