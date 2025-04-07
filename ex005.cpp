#include<iostream>
using namespace std;

int main(){
    float salario, salarioB, aumento;

    cout << "Programa que calcula o aumento do salario de acordo com o percentual informado"<<endl;
    
    cout << "informe seu salario atual: ";
    cin >> salario;
    cout << "\nInforme o aumento: ";
    cin >> aumento;
    
    salarioB = salario + ((aumento/100)*salario);

    cout << "O seu salario agora é: "<< salarioB <<endl;

    



    return 0;
}