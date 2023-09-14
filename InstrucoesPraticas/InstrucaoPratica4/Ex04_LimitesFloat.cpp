/*
    Exercício 4: Manipulação de variáveis de ponto flutuante, explorando os limites.
    Durante a aula foram apresentados o tipo de dados double e suas 
    variações, que permitem representar um subconjunto dos números reais.
    Sobre estes tipos de dados crie uma aplicação que:

    a. Sobre o tipo float identifique qual o menor e o maior valor que
    pode ser representado por uma variável deste tipo. Mostre esta
    informação na tela.

    b. Crie uma variável pif de tipo float e atribua a ela o valor da
    constante pi com o maior número de casas decimais que você consiga
    achar na Internet. Imprima este valor na tela.

    c. Explore as formas de formatar a saída com o comando cout e
    modifique a quantidade de casas decimais que são apresentadas para
    2, 4, 8 e 16.

    d. Crie uma variável pid de tipo double e atribua a ela o valor da
    constante pi com o maior número de casas decimais que você consiga
    achar na Internet. Imprima este valor na tela.

    e. Identifique se existe alguma diferença entre o valor pif e pid quando
    seus valores são impressos com cout utilizando 2, 4, 8 e 16 casas
    decimais

    f. No seu sistema existe diferença entre o tipo double e long double?
    Mostre seu achado com algum exemplo dentro do seu código.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){
    // Resolução da letra 'a'.
    cout << "O maior valor que pode ser representado por uma variável float é: " << numeric_limits<float>::max() << endl;
    cout << "O menor valor que pode ser representado por uma variável float é: " << numeric_limits<float>::min() << endl;

    cout << "\t===============--=-=-=-=-=-=--===============\n";

    // Resolução da letra 'b' e 'c'.
    float pif = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

    cout << "Valor de pi: " << pif << endl;
    cout << setprecision(2) << fixed;
    cout << "Valor de pif (2 casas decimais): " << pif << endl;
    cout << setprecision(4) << fixed;
    cout << "Valor de pif (4 casas decimais): " << pif << endl;
    cout << setprecision(8) << fixed;
    cout << "Valor de pif (8 casas decimais): " << pif << endl;
    cout << setprecision(16) << fixed;
    cout << "Valor de pif (16 casas decimais): " << pif << endl;

    // Resolução da letra 'd'.
    cout << "\t===============--=-=-=-=-=--===============\n";

    double pid = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

    cout << setprecision(-1);
    cout << "Valor de pi (double): " << pid << endl;
    cout << setprecision(2) << fixed;
    cout << "Valor de pid (2 casas decimais): " << pif << endl;
    cout << setprecision(4) << fixed;
    cout << "Valor de pid (4 casas decimais): " << pif << endl;
    cout << setprecision(8) << fixed;
    cout << "Valor de pid (8 casas decimais): " << pif << endl;
    cout << setprecision(16) << fixed;
    cout << "Valor de pid (16 casas decimais): " << pif << endl;

    // Resposta da letra 'e': sem diferenças!

    // Resolução da letra 'f'.
    cout << "\t===============--=-=-=-=-=--===============\n";
    cout << setprecision(-1) << fixed;

    long double pild = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

    cout << "PI em long double: " << pild << endl;
    // Testando a quantidade de bytes: o long double possui o dobro de armazenamento, mas, para mim, não mostrou diferença na impressão da constante PI. 
    cout << "Quantidade de bytes do long double: " << sizeof(pild) << endl;
    cout << "Quantidade de bytes do double: " << sizeof(pid) << endl;

    return 0;
}