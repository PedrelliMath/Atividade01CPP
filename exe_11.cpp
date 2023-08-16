#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    float salario_bruto;
    float valor_INSS;
    float salario_liquido;
};

struct Funcionario criaFuncionario();
float calculaDisconto(float salario);

int main(void){

    struct Funcionario funcionario1 = criaFuncionario();

    cout << "Nome: " << funcionario1.nome << endl;
    cout << "Salario bruto: " << funcionario1.salario_bruto << endl;
    cout << "Valor INSS: " << funcionario1.valor_INSS << endl;
    cout << "Salario liquido: " << funcionario1.salario_liquido << endl;

    return 0;
}

struct Funcionario criaFuncionario(void){
    struct Funcionario funcionario;
    
    string _nome;
    float _salario_bruto = 0;

    cout << "Digite o nome do funcionario que deseja criar: " << endl;
    cin >> _nome;

    cout << "Digite o salario bruto do funcionario: " << endl;
    cin >> _salario_bruto;

    funcionario.nome = _nome;
    funcionario.salario_bruto = _salario_bruto;
    funcionario.valor_INSS = calculaDisconto(funcionario.salario_bruto);
    funcionario.salario_liquido = funcionario.salario_bruto - (funcionario.valor_INSS * funcionario.salario_bruto);

    return funcionario;
}

float calculaDisconto(float salario){ 
     
    if(salario < 1000.00) return 0.08;
    else if(salario < 1500.00) return 0.085;
    else return 0.09;
}