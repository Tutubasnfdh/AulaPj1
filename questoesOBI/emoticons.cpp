#include <iostream>
#include <string>
using namespace std;
int main(void){
    string linha;
    int d = 0;
    int c = 0;
    int res;
    int tam;
    getline(cin, linha);

    tam = linha.size();
    
    for(int i = 0; i < (tam - 2); i++){
        if(linha[i] == ':' && linha[i+1] == '-' && linha[i+2] == ')'){
            d++;
        }
              if(linha[i] == ':' && linha[i+1] == '-' && linha[i+2] == '('){
            c++;
        }}

        if(d>c){
            cout << "divertido\n";
        } else {
            if(d<c){
                cout << "chateado\n";
            }else{
                cout << "neutro\n";
            }
        }

    return 0;
}