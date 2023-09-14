/*
    Exercício 3: Manipulação de variáveis de tipo inteiro, explorando os limites.
    
    Durante a aula foi apresentado o tipo de dado int e suas variações, que
    permitem representar um subconjunto dos números inteiros. Sobre estes
    tipos de dados crie uma aplicação que:

    a. Sobre o tipo int identifique qual o menor e o maior valor que pode
    ser representado por uma variável deste tipo. Mostre esta informação na tela.

    b. Crie uma variável uli, de tipo unsigned long int, atribua a ela
    o maior valor que pode ser armazenado neste tipo de dado
    (identifique qual o menor e o maior valor que pode ser representado);

    c. Crie uma variável li, de tipo long int, atribua a ela o valor da
    variável uli e depois atribua novamente a uli o valor armazenado
    em li. O que acontece e por que? Mostre o resultado na tela e
    coloque suas considerações num comentário no código.

    d. Atribua a li o maior valor que pode ser armazenado num long
    int (identifique qual o menor e o maior valor que pode ser
    representado);

    e. Crie uma variável ui, de tipo unsigned int, atribua a ela o valor
    da variável li e depois atribua novamente a li o valor armazenado
    em ui. O que acontece e por que? Mostre o resultado na tela e
    coloque suas considerações num comentário no código.

    f. Atribua a ui o maior valor que pode ser armazenado num
    unsigned int (identifique qual o menor e o maior valor que pode
    ser representado);
*/

#include <iostream>
#include <limits>

using namespace std;

int main(){

    // Resolvendo a letra 'a'.
    cout << "O maior valor que uma variável [int] pode ser representada é: " << numeric_limits<int>::max() << endl;
    cout << "O menor valor que uma variável [int] pode ser representada é: " << numeric_limits<int>::min() << endl;

    cout << "\t===============--=-=-=-=-=--===============\n";

    // Resolvendo a letra 'b'. Como o unsigned só trabalha com números positivos, então o menor valor que essa variável representará é: 0.
    unsigned long int uli = 18446744073709551615;
    cout << "Maior valor de uma variável [unsigned long int]: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Menor valor de uma variável [unsigned long int]: " << numeric_limits<unsigned long int>::min() << endl;

    // Resolvendo a letra 'c': 
    // Quando atribuímos o valor de 'uli' para 'li', a impressão sai como '-1'. Entretanto, quando atribuímos o valor de 'li' para 'uli', o valor volta a ser '18446744073709551615'. Isso acontece pois o valor original do 'uli' é maior do que o maior valor positivo representável pelo long int, assim, o valor resultante será interpretado como negativo. (Pesquisa na Internet) -> Isso ocorre porque o bit mais significativo (o bit mais à esquerda) do unsigned long int é interpretado como o bit de sinal no long int, o que pode levar a uma mudança no valor.
    cout << "\t===============--=-=-=-=-=--===============\n";
    long int li = uli;
    cout << "Valor de uli atribuído à li: " << li << endl;
    uli = li;
    cout << "Valor de li atribuído à uli: " << uli << endl;

    // Resolução da letra 'd'.
    cout << "\t===============--=-=-=-=-=--===============\n";
    li = 9223372036854775807;
    cout << "Maior valor representável pelo [long int]: " << numeric_limits<long int>::max() << endl;
    cout << "Menor valor representável pelo [long int]: " << numeric_limits<long int>::min() << endl;

    // Resolução da letra 'e': 
    // Quando atribuímos o valor da variável do long int(li) '9223372036854775807' ao unsigned int(ui), ocorre uma alteração para '4294967295', que é o valor máximo representável por um unsigned int. Porém, quando atribuímos o valor da variável unsigned int de volta para a variável long int, não ocorre alteração na impressão, continuando como '4294967295'. Isso acontece pois na primeira atribuição o valor está fora da faixa de números representáveis pelo tipo unsigned int, então ocorre a mudança. Todavia, quando retornamos a atribuição do 'ui' para 'li', o valor alterado do 'ui' está dentro da faixa representável por um long int, sendo assim, o 'li' mantém o valor que havia sido alterado '4294967295'.
    cout << "\t===============--=-=-=-=-=--===============\n";
    unsigned int ui = li;
    cout << "Valor de li atribuído à ui: " << ui << endl;
    li = ui;
    cout << "Valor de ui atribuído à li: " << li << endl;

    // Resolução da letra f.
    cout << "\t===============--=-=-=-=-=--===============\n";
    cout << "Maior valor representável por um [unsigned int] é: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Menor valor representável por um [usigned int] é: " << numeric_limits<unsigned int>::min() << endl;
    
    return 0;
}