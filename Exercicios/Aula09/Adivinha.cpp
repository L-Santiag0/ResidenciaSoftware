/*
    Escreva um programa em que simule um jogo de adivinhação. O
    programa deve gerar um número aleatório entre 1 e 100, e o usuário deve
    tentar adivinhar esse número. O jogo deve informar se o palpite está alto,
    baixo ou correto, e continuar até que o usuário acerte o número.
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand (time(0));
    int numeroMaquina = rand()%100+1;
    int tentativaAdivinha;

    cout << "\t ----- ADIVINHA -----\n";
    
    do{
        cout << "Adivinhe o número em que pensei (entre 1 e 100): ";
        cin >> tentativaAdivinha;
        
        if (tentativaAdivinha >= 0 && tentativaAdivinha <= 100){
            if(tentativaAdivinha > numeroMaquina)
                cout << "O palpite está alto!\n";
            
            else if (tentativaAdivinha < numeroMaquina)
                cout << "O palpite está baixo!\n";
        }
        else 
            cout << "Informe um valor válido!\n";

    } while(tentativaAdivinha != numeroMaquina);

    cout << "\nParabéns, você acertou!\n\n";

    return 0;
}