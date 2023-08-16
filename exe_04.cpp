#include <iostream>
#include <algorithm> 
using namespace std;

int main(void){

    char string[3][50];
    int size[3] = {0};

    for(int i = 0; i < 3; i++){
        cout << "Digite a string " << i + 1 << endl;
        cin >> string[i];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; string[i][j] != '\0'; j++){
            size[i] += 1;
        }
    }

    sort(size, size + 3, greater<int>());

    for (int i = 0; i < 3; i++) {
        cout << "Tamanho " << i + 1 << ": " << size[i] << endl;
    }

    return 0;
}