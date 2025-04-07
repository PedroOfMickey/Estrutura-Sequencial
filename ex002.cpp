//Faça um programa que receba três notas, calcule e mostre a média aritmética.
#include <iostream>
using namespace std;
    float n1, n2, n3;
    
int main (){
    cout << "Programa para calculo de medias "<<endl;

    cout << "digite o valor da primeira nota: ";
    cin >> n1;
    cout <<  "\ndigite o valor da segunda nota: ";
    cin >> n2;
    cout << "\ndigite o valor da terceira nota: ";
    cin >> n3;

    float media = (n1 + n2 + n3)/3;
    cout << "\nA media desses tres valores é: " << media;

    

    system("pause");

    return 0;
}