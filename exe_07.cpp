#include <iostream>
using namespace std;

struct data{
    char data1[50];
    float data2 = 0.0;
    int data3 = 0;
    double data4 = 0.0;
};

int main(void){

    struct data Mydata;

    cout << "Digite a string da struct: " << endl;
    cin >> Mydata.data1;

    cout << "Digite o float da struct: " << endl;
    cin >> Mydata.data2;

    cout << "Digite o int da struct: " << endl;
    cin >> Mydata.data3;

    cout << "Digite o double da struct: " << endl;
    cin >> Mydata.data4;

    cout << "String: " << Mydata.data1 
         << "\nFloat: " << Mydata.data2
         << "\nInt: " << Mydata.data3
         << "\nDouble: " << Mydata.data4
         << endl;

    return 0;
}