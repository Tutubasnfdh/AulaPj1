#include <iostream>
using namespace std;
int main (void){
    int N, K, V;

    cin >> N >> K;

    int A[N];
//descobrir o array A
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
//ordenar por bubblesort
    
      for(int j = 0; j < N-1; j++){
            for(int i = 0; i < N-j-1; i++){
                if(A[i] > A[i+1]){
                    V= A[i];
                    A[i]=A[i+1];
                    A[i+1] = V;
                }
            }

    }
//decidir a nota
    int X = N-K;

    cout << A[X] << "\n";





    return 0;
}