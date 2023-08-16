#include <iostream>
using namespace std;

struct Pessoa{
    char nome[50];
    int idade = 0;
};

struct Pessoa changeValues(struct Pessoa pessoa);

int main(void){

    struct Pessoa pessoa1;

    pessoa1 = changeValues(pessoa1);

    cout << "O nome alterado e: " << pessoa1.nome << endl;
    cout << "A idade alterada e: " << pessoa1.idade << endl;

    return 0;
}

struct Pessoa changeValues(struct Pessoa pessoa){

    cout << "Digite o nome: " << endl;
    cin >> pessoa.nome;

    cout << "Digite a idade: "<< endl;
    cin >> pessoa.idade;

    return pessoa;
}