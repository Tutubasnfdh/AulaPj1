#include <iostream>
using namespace std;
int main(void){
    int base, exp, res = 1;

    cout << "Qual a base da potência? ";
    cin >> base;

    cout << "Qual o expoente da potência? ";
    cin >> exp;

    int i = 0;

    while(i < exp){
        res = res * base;

        i = i + 1;
    }

    cout << "O resultado é " << res << "\n";

    return 0;
}