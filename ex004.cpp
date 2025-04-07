//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
#include<iostream>
using namespace std;

float salarioA,salarioB;//salarioA = Salario atual, salarioB = salario modificado

int main (){
    cout << "Programa para que mostra aumento de salario"<<endl;

    cout << "Informe seu salario atual: ";
    cin >> salarioA;
    salarioB = salarioA * 1.25;
    cout << "\nSeu novo salario é: "<< salarioB;

    


    return 0;
}