#include <iostream>

using namespace std;

int main(){
  
    for (int dividendo = 1 ; dividendo <= 100 ; dividendo++){
        int totalDivisores = 0;
        for (int divisor = 1 ; divisor <= 100 ; divisor++){
            if (dividendo % divisor == 0)
                totalDivisores += 1;
        }

        if (totalDivisores == 2)
                cout << dividendo << " | ";
    }
    return 0;
}