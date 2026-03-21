#include <iostream>

using namespace std;

int main(void){
    int a, b, resto;
  
    cout << "Digite os números ";
    cin >> a >> b;
    resto = a % b;

    cout << "O resto da divisão deles é " << resto << "!\n";
    
    return 0;
}