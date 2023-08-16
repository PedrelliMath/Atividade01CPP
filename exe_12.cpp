#include <iostream>
using namespace std;

int main(void){

    int X = 0;

    cout << "Digite o numero X: " << endl;
    cin >> X;

    for(int i = 0; i <= X; i++){
        if(i % 2 == 0 || i % 6 == 0) cout << i << endl;
    }

    return 0;
}