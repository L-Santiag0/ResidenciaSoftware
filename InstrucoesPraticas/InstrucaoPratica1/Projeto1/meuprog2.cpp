#include <iostream>
#include <string>

using namespace std;

int main(void) {

    float A, B;
    cout << "Qual o primeiro número? "; 
    cin >> A;
    cout << "Qual o segundo número? ";
    cin >> B;
    cout << "Soma: " << A + B << endl;
    cout << "Subtração: " << A - B << endl;
    cout << "Multipllicação: " << A * B << endl;
    cout << "Divisão: " << A / B << endl;
    cout << "Resto: " << A % B << endl;

    return 0;
}