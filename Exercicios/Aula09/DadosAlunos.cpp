/*
    Desenvolva um programa que receba a matrícula (apenas números) e 3
    notas de um grupo de alunos. A cada aluno cadastrado o programa deve
    perguntar se deseja prosseguir com outro. Em seguida, calcule a média de
    cada aluno e imprima os dados da seguinte forma:

    MATRICULA   NOTA1   NOTA2   NOTA3   MEDIA
    =========================================
    123456789   10.0    8.0     9.9     9.3

    OBS. (para mim): O código está funcionando, porém, lembre de consertar!
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int contador = 1, matricula[contador];
    float nota1[contador], nota2[contador], nota3[contador], media[contador];
    char novoCadastro;

    cout << setprecision(1) << fixed;

    do {
        cout << "Qual o número da matrícula? ";
        cin >> matricula[contador-1];
        cout << "Informe a primeira nota: ";
        cin >> nota1[contador-1];
        cout << "Informe a segunda nota: ";
        cin >> nota2[contador-1];
        cout << "Informe a terceira nota: ";
        cin >> nota3[contador-1];
        cout << "Deseja cadastrar um novo aluno? [Y/N] ";
        cin >> novoCadastro;
        cout << endl;

        media[contador-1] = ((nota1[contador-1] + nota2[contador-1] + nota3[contador-1]) / 3);
        contador += 1;

    } while (toupper(novoCadastro) == 'Y');

    for (int i = 0 ; i < contador-1 ; i++){
        cout << "\nMATRÍCULA\tNOTA1\tNOTA2\tNOTA3\tMÉDIA\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << matricula[i] << "\t\t" << nota1[i] << "\t" << nota2[i] << "\t" << nota3[i] << "\t" << media[i] << endl;
    }

    return 0;
}