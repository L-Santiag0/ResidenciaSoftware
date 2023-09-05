#include <iostream>

using namespace std;

int main(){

    int numeroUsuario;

    cout << "Digite o número: ";
    cin >> numeroUsuario;
    for (int i = 1 ; i <= 100 ; i++){
       if (numeroUsuario % i == 0){
        cout << i << " | ";
       }
    }
    return 0;
}