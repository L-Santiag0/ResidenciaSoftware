/*
    Escreva um programa em que leia um número int e determine se ele é perfeito. 
    Um número perfeito é aquele cuja soma dos seus divisores, excluindo ele mesmo, é igual ao próprio número. 
*/

#include <iostream>

using namespace std;

int main(){

    int num, somaDivisores = 0;

    cout << "Digite um número: ";
    cin >> num;

    for (int i = 1 ; i < num ; i++){
        if (num % i == 0)
            somaDivisores += i;
    }

    if (somaDivisores == num)
        cout << num << " é um número perfeito!\n\n";
    else
        cout << num << " não é um número perfeito!\n\n";
    
    return 0;
}