/*
    Escreva um programa que leia um número int e imprima a sequência de Fibonacci (Referência) até o número fornecido pelo usuário.
*/

#include <iostream>

using namespace std;

int main(){

    int numUsuario, numAtual = 1, numAnterior = 0, somaNumeros = 1;

    cout << "Digite o número: ";
    cin >> numUsuario;


    for (int i = 1 ; i <= numUsuario ; i++){
        if (i != numUsuario){
            cout << somaNumeros << ", ";
        }
        else 
            cout << somaNumeros << "...\n\n";

        somaNumeros = numAtual + numAnterior;
        numAnterior = numAtual;
        numAtual = somaNumeros;
    }

    return 0;
}