#include <iostream>
using namespace std;

int main(void){

    int n = 0, sum = 0;

    cout << "Digite o valor de N: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum += (i*i);
    }

    cout << "O somatorio dos quadrados dos valores e: " << sum << endl;

    return 0;
}