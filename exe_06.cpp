#include <iostream>
using namespace std;

void changeValue(int *_var);

int main(void){

    int var = 0;
    
    cout << "O valor de var antes de alterar e: " << var << endl;

    changeValue(&var);

    cout << "O valor de var apos alterar e: " << var << endl;
    
    return 0;
}

void changeValue(int *_var){
    
    int value = 0;

    cout << "Digite o valor que deseja alterar: " << endl;
    cin >> value;

    *_var = value;
}

