/* Faça um programa que leia e valide as seguintes informações:
Idade: entre 0 e 150;
Salário: maior que zero;
Sexo: 'f' ou 'm';
Estado Civil: 's', 'c', 'v', 'd'; */

#include <iostream>
using namespace std;

int idade,salario;
char sexo,estadoC;

int main()
{
    cout<<"digite uma idade entre 0 e 150"<<endl;
    cin>>idade;
    
    while(idade<0 || idade>150){
        cout<<"erro idade invalida";
        cin>>idade;
    }
    
    cout<<"digite um salario maior que 0"<<endl;
    cin>>salario;
    
    while(salario<0){
        cout<<"erro salario invalida";
        cin>>salario;
    }
    
     cout<<"digite um sexo entre 'm' e 'f'"<<endl;
     cin>>sexo;
     
     while(sexo!='m'&& sexo!='f'){
        cout<<"erro sexo invalida";
        cin>>sexo;
    }
     cout<<"digite o estado civil entre 's' 'c' 'v' 'd'"<<endl;
     cin>>estadoC;
     
     while(estadoC!='s'&& estadoC!='c'&& estadoC!='v'&& estadoC!='d' ){
        cout<<"erro estadoC invalido";
        cin>>estadoC;
    }
    cout<<"idade"<<idade<<endl;
    cout<<"salario"<<salario<<endl;
    cout<<"sexo"<<sexo<<endl;
    cout<<"estadoC"<<estadoC<<endl;
    return 0;
}
