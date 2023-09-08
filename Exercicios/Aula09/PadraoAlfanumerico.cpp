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
