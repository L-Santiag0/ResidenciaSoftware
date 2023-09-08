/*
    A seguinte expressão em C gera valores aleatórios de ponto flutuante 
    entre 0 e 10: ((float)rand()/RAND_MAX)*10. 
    Utilizando esta expressão implemente uma aplicação que:

    a. Simule as notas de uma turma de 15 alunos em uma avaliação e guarde no array.
    b. Simule as notas dessa turma numa segunda avaliação e guarde em um segundo array;
    c. Compare as notas de cada aluno na segunda avaliação, em relação à
    primeira, e imprima na tela as mensagens “Melhorou”, “Piorou” ou
    “Manteve a nota” de acordo com o desempenho de cada aluno;
    d. Preencha um um terceiro array com a média de cada aluno nas duas avaliações.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float nota1[15], nota2[15], media[15];

    srand(time(0));
    cout << setprecision(2) << fixed;

    for (int i = 0 ; i < 15 ; i++){
        nota1[i] = ((float)rand()/RAND_MAX)*10;
        nota2[i] = ((float)rand()/RAND_MAX)*10;
        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    for (int i = 0 ; i < 15 ; i++){
        if (nota2[i] > nota1[i]){
            cout << "\n-=-=-=-\tALUNO " << i+1 << " -=-=-=-\n";
            cout << "O aluno MELHOROU a nota!\n";
            cout << "Nota 1: " << nota1[i] << "\nNota 2: " << nota2[i];
            cout << "\nMédia: " << media[i] << endl;
        }
        else if (nota2[i] < nota1[i]){
            cout << "\n-=-=-=-\tALUNO " << i+1 << " -=-=-=-\n";
            cout << "O aluno PIOROU a nota!\n";
            cout << "Nota 1: " << nota1[i] << "\nNota 2: " << nota2[i];
            cout << "\nMédia: " << media[i] << endl;
        }   
        else {
            cout << "\n-=-=-=-\tALUNO " << i+1 << " -=-=-=-\n";
            cout << "O aluno MANTEVE a nota!\n";
            cout << "Nota 1: " << nota1[i] << "\nNota 2: " << nota2[i];
            cout << "\nMédia: " << media[i] << endl;
        }
    }

    return 0;
}