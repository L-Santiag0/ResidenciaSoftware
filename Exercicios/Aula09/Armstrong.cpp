/*
    Escreva um programa que leia um número int e verifique se ele é um número armstrong. Um número armstrong é um número que é igual à soma de seus próprios dígitos elevados à quantidade de dígitos. Por exemplo, 153 é um número armstrong porque 1³ + 5³ + 3³ = 153.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int numUsuario, recebeNumUsuario=0, cont = 0, somaArmstrong = 0, armstrong[20];

    cout << "Digite um número: ";
    cin >> numUsuario;

    recebeNumUsuario = numUsuario; // Armazena a entrada do usuário para comparação no final.
    do {
        armstrong[cont] = recebeNumUsuario % 10; // Armazena cada unidade em uma 
        recebeNumUsuario /= 10;                  // posição do array (vai do último 
        cont += 1;                               // dígito até o  primeiro).

    } while (recebeNumUsuario > 0);

    for (int i = 0 ; i < cont ; i++){
        somaArmstrong += pow(armstrong[i], cont);
    }

    if (somaArmstrong == numUsuario)
        cout << numUsuario << " é um número ARMSTRONG!\n\n";
    else
        cout << numUsuario << " NÃO é um número ARMSTRONG!\n\n";

    return 0;
}