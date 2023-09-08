/*  Resumo da atividade

    Utilizando a expressão "1+rand()%20" desenvolva uma aplicação que:

    a. Preencha um array com 100 elementos de tipo int, com valores
    aleatoriamente gerados entre 1 e 20.
    
    b. Utilize um array de 20 posições para determinar quantas vezes se
    repete cada um dos possíveis valores gerados no array;
    
    c. Determine qual ou quais os números que mais vezes aparecem no
    array;

*/

#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int arrayTamCem[100], arrayTamVinte[20], maiorOcorrencia = 0;

    // Resolvendo a letra "a".
    srand(time(0));  // Utilizando para alterar os números a cada execução do programa.

    for (int i = 0 ; i < 100 ; i++){
        arrayTamCem[i] = rand()%20 + 1;
    }

    // Resolvendo a letra "b".
    for (int i = 0 ; i < 20 ; i++){

        int ocorrencias = 0;  // contador reinicia a cada laço.

        for (int j = 0 ; j < 100 ; j++){     
            if (arrayTamCem[j] == i+1){  // Verifica todas as posiçoes do array 
                ocorrencias += 1;        // e se for igual ao i+1 (número entre 1 e 20)
            }                            // adiciona 1 ao contador.
        }
        arrayTamVinte[i] = ocorrencias;   

        if (maiorOcorrencia < ocorrencias)
            maiorOcorrencia = ocorrencias;
        
    }                               

    // Resolvendo a letra "c".

    for (int i = 0 ; i < 20 ; i++){
        if (maiorOcorrencia == arrayTamVinte[i]){ // Verifica em quais posiçoẽs estão os números mais recorrentes.
            cout << "O número que mais aparece é: " << i+1 << endl;
            cout << "Surgiu " << maiorOcorrencia << " vezes.\n";
        }
    }

    return 0;
}