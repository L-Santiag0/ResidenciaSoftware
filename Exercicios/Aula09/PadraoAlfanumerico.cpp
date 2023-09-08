/*
	Escreva um programa em C++ que gere e imprima o seguinte padrão de
	caracteres alfanuméricos, onde o número fornecido pelo usuário é a altura
	do padrão:	A
				BC
				DEF
				GHIJ
*/

#include <iostream>

using namespace std;

int main()
{
	char alfabetoUp = 'A', alfabetoLower = 'a', numeros = '0';    
	int altura;
	
	cout << "Digite a quantidade de linhas: ";
	cin >> altura;
	for (int coluna = 1 ; coluna <= altura ; coluna++){
	    for (int linha = 1 ; linha <= coluna ; linha++){
	           if (alfabetoUp <= 'Z'){
    	            cout << alfabetoUp;
    	            alfabetoUp += 1;
	           }
	           else if (alfabetoLower <= 'z'){
	                cout << alfabetoLower;
	                alfabetoLower += 1;
	           }
	          else if (numeros <= '9'){
	              cout << numeros;
	              numeros += 1;
	           }
	          else {
	              cout << "*";
	          }
	      }
	cout << endl;
	}
}
