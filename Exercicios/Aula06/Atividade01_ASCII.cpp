/*
    Breve resumo da atividade.

    Desenvolver um programa em C++ que:

    a. Imprima na tela, utilizando cout, cada um dos caracteres numéricos e
    seu correspondente código numérico.

    b. Modificar o programa para que a saída imprima também o código
    numérico em octal e em hexadecimal.

    c. Acrescente ao código a possibilidade de ler um caractere qualquer 
    e imprima no mesmo formato do inciso anterior.

    d. Pesquisar como armazenar em uma variável os caracteres especiais ‘ç’ e ‘ã’. Acrescente no código um exemplo que demonstra como usar este recurso. 

*/

#include <iostream>
#include <unistd.h> // Incluindo o cabeçalho para utilizar o sleep().

using namespace std;

int main(){

    char caractere;

    cout << "-=-=-  TABELA ASCII  -=-=-\n";

    // Resolução dos exercícios 'a' e 'b'.
    for (int i = '0' ; i <= '9' ; i++){
        sleep(1);
        cout << "\v------- " << char(i) << " -------\n";
        cout << "Decimal: " << dec << i << endl;
        cout << "Octal: " << oct << i << endl;
        cout << "Hexadecimal: " << hex << i << endl;
    }

    // Resolução do exercício 'c'.
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "\vEntre com um caractere: ";
    cin >> caractere;

    cout << "\v------- " << caractere << " -------\n";
    cout << "Decimal: " << int(caractere) << endl;
    cout << "Octal: " << oct << int(caractere) << endl;
    cout << "Hexadecimal: " << hex << int(caractere) << endl;

    // Resolução do exercício 'd'.

    return 0;
}