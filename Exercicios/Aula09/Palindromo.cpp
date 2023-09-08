/*
    Escreva um programa em C++ que leia um número inteiro e verifique se ele
    é um palíndromo. Um número é palíndromo se ele permanece o mesmo
    quando seus dígitos são invertidos.
*/

#include <iostream>

using namespace std;

int main(){

    int num, stop, numInvertido = 0;

    cout << "Digite o número: ";
    cin >> num;
    
    stop = num;
    do {
        numInvertido += stop % 10;
        numInvertido *= 10;
        stop /= 10;
        
    } while (stop > 0);

    if (num == numInvertido/10)
        cout << "É um palíndromo!\n";
    else 
        cout << "Não é um palíndromo!\n";

    return 0;
}