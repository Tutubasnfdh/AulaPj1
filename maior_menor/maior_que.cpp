#include <iostream>

using namespace std;

int main(void){
    int a, b;

    cout << "Digite os números ";
    cin >> a >> b;

    if (a>b) {
        cout << "O primeiro é maior \n";
    }else{
        if (a<b) {cout << "O segundo é maior \n";}
        else {
            cout << "Eles são iguais \n";
        }
        
    }

    return 0;
}