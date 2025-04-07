//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <iostream>
using namespace std;

float n1,n2,n3;//n = notas
int p1,p2,p3;// p = peso

int main(){

    cout << "PROGRAMA QUE CALCULA MENDIA PONDERADA DE 3 NOTAS"<<endl;

    cout << "Digite n1: ";
    cin >>  n1;
    cout << "\ndigite o peso de p1:";
    cin >> p1;
    cout << "\ndigite n2: ";
    cin >> n2;
    cout << "\ndigite o peso de n2: ";
    cin >> p2;
    cout << "\ndigite n3: ";
    cin >> n3;
    cout << "digite o peso de n3: ";
    cin >> p3;

    float media = ((n1*p1)+(n2*p2)+(n3*p3)) / (p1+p2+p3);

    cout << "A media ponderada é: "<<media <<endl;





    



    return 0;

}