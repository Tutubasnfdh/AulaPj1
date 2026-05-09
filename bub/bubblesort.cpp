#include <iostream>
using namespace std;
int main(void){
    int n=7;
    int A[n] = {2, 5, 20, 200, 4, 60, 22};
    int v;

    for(int j = 0; j < n-1; j++){
            for(int i = 0; i < n-j; i++){
                if(A[i] > A[i+1]){
                    v= A[i];
                    A[i]=A[i+1];
                    A[i+1] = v;
                }
            }

    }

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    cout << "\n";


    return 0;

}

