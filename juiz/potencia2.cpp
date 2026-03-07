#include <iostream>
using namespace std;
int main(void){
    int base = 2;
    long long res = 1;
    char r;

    while(true){
        cout << "res = " << res << "\n";
        cout << "Você quer multiplicar res por 2? Responda com Y para sim. ";
        cin >> r;

        if(r != 'Y' && r != 'y'){
            break;
        }

        res *= base;
    }


    return 0;
}