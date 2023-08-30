#include <iostream>
#include <iomanip> // incluindo a biblioteca para manipular a precisão das casas decimais.
#include <string>

using namespace std;

int main(void) {

    float A, B;
    cout << "Qual o primeiro número? "; 
    cin >> A;
    cout << "Qual o segundo número? ";
    cin >> B;
    cout << setprecision(1) << fixed; // setprecision(1): Deixando a precisão em 1 casa decimal. << Fixed: Um dígito após o ponto/vírgula.
    cout << "Soma: " << A + B << endl;
    cout << "Subtração: " << A - B << endl;
    cout << "Multipllicação: " << A * B << endl;
    cout << "Divisão: " << A / B << endl;

    return 0;
}