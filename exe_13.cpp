#include <iostream>
using namespace std;

int main(void){

    int num = 0, result = 1;

    cout << "Digite o numero: " << endl;
    cin >> num;

    for(int i = num; i >= 1; i--){

        cout << i << endl;
        result *= i;
    }
   
    cout << "O resultado e: " << result << endl;

    return 0;
}