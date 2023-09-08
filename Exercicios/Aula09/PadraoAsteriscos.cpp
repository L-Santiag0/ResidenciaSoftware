#include <iostream>

using namespace std;

int main(){

    int altura;

    cout << "Digite o número: ";
    cin >> altura;
    cout << "\n";
    
    for (int coluna = 1 ; coluna <= altura ; coluna++){
        for (int linha = 1 ; linha <= altura ; linha++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int coluna = 1 ; coluna <= altura ; coluna++){
        for (int linha = 1 ; linha <= coluna ; linha++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int coluna = 1 ; coluna <= altura ; coluna++){
        for (int linha = 1 ; linha <= altura ; linha++){
            if (coluna == 1 || coluna == altura || linha == 1 || linha == altura)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    
    cout << "\n";

    return 0;
}