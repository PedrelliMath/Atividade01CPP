#include <iostream>
using namespace std;

int resto(int n1, int n2);

int main(void){

    int n[2] = {0};

    for(int i = 0; i < 2; i++){
        cout << "Digite o n" << i + 1 << endl;
        cin >> n[i];
    }

    cout << "O resto da divisao entre n1 e n2 e: " << resto(n[0], n[1]) << endl;

    return 0;
}

int resto(int n1, int n2){
    return n1 % n2;
}