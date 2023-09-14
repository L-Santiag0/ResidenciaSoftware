/*
    A seguinte expressão gera um valor de ponto flutuante aleatório entre 
    10 e 40: 1 + 30.0*(rand()%100)/3000.0. Supondo que se deseja simular 
    uma rede de estações meteorológicas, implemente uma aplicação que:
    
    A. Armazene num array as temperaturas reportadas por 250 estações.
    B. Determine a temperatura máxima e mínima reportadas;
    C. Determine a temperatura média entre as 250 estações;
    D. Um modelo de predição estima que, dentro de uma hora, as estações
    que estão marcando temperatura acima da média vão ficar 1 grau mais
    quente. Já as que estão marcando abaixo da média vão ficar 2 graus
    mais frias. Atualize o array com as temperaturas das estações, de
    acordo com a previsão do modelo.

    OBS.: a expressão fornecida só retornava '1'. Portanto, alterei a fórmula 
    para que gerasse o número entre 10 e 40.

*/

#include <iostream>

using namespace std;

int main(){

    int temperaturaEstacoes[250];
    float tempMinima = 41, tempMaxima = 0, tempMedia = 0;
    char simularHora;

    //Resolvendo a letra 'a'.
    for (int i = 0 ; i < 250 ; i++){
        temperaturaEstacoes[i] = rand()%31 + 10; // Ler a 'OBS' no início.
    }

    do {
        float somaTemperaturas = 0;

        cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        // Resolvendo a letra 'b'.
        for (int i = 0 ; i < 250 ; i++){
            if (temperaturaEstacoes[i] < tempMinima)
                tempMinima = temperaturaEstacoes[i];

            else if (temperaturaEstacoes[i] > tempMaxima)
                tempMaxima = temperaturaEstacoes[i];
            
            somaTemperaturas += temperaturaEstacoes[i];
        }

        // Resolvendo a letra 'c'.
        tempMedia = somaTemperaturas / 250;

        cout << "Média das temperaturas: " << tempMedia << endl;
        cout << "Temperatura máxima: " << tempMaxima << endl;
        cout << "Temperatura mínima: " << tempMinima << endl;

        // Resolvendo letra 'd' - atualização do array conforme a predição.
        for (int i = 0 ; i < 250 ; i++){
            if (temperaturaEstacoes[i] > tempMedia)
                temperaturaEstacoes[i] += 1;

            else if (temperaturaEstacoes[i] < tempMedia)
                temperaturaEstacoes[i] -= 2;            
        }

        cout << "\nDeseja simular um avanço no tempo (1h)? [Y/N] ";
        cin >> simularHora;

    } while (toupper(simularHora) == 'Y');

    return 0;
}