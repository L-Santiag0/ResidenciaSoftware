/*
    A seguinte expressão em C++ gera caracteres aleatórios no intervalo das 
    letras minúsculas: ‘a’ + rand()%(‘z’ - ‘a’). Utilizando esta expressão
    implemente uma aplicação em que: 

     a. Gere duas strings de forma aleatória com 10 caracteres;
 
     b. Transforme o primeiro caractere de cada string em maiúscula;

     c. Imprima as strings em ordem alfabética;
     
*/

#include <iostream>

using namespace std;

int main(){

	char string1[10], string2[10];
    srand(time(0));
	
	for (int i = 0 ; i < 10 ; i++){
	    string1[i] = 'a' + rand()%('z' - 'a');
	    string2[i] = 'a' + rand()%('z' - 'a'); 
	    
	    if (i == 0){
	        string1[i] -= 32;
	        string2[i] -= 32;
	    }
	}
	
 	for (int i = 'a' ; i <= 'z' ; i++){
	       for (int j = 0 ; j < 10 ; j++){
	           if (string1[j] == i || string1[j] == i-32)
	               cout << string1[j] << " | ";
	            
	           if (string2[j] == i || string2[j] == i-32)
	               cout << string2[j] << " | ";
	       }
 	}
    cout << "\n\n";
	return 0;
}
