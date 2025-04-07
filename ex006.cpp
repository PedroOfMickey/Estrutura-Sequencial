//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

#include <iostream>
using namespace std;

int main(){
    float salario, salarioB;
    cout << "programa que calcula o salario a receber apos gratificação e impostos"<<endl;

    cout << "informe o seu salario base: ";
    cin >> salario;
    salarioB = (salario + (salario*0.05)) - (salario*0.07) ;
    cout << "\nSeu salario final sera de: "<< salarioB << endl;

    return 0;
}
