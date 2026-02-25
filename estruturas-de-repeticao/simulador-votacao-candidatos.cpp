/*15. Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores.
Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.
Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de 
código. Os códigos utilizados são:
1 , 2, 3, 4 - Votos para os respectivos candidatos
(você deve montar a tabela ex: 1 - Jose/ 2- João/etc)
5 - Voto Nulo
6 - Voto em Branco
Faça um programa que calcule e mostre:
O total de votos para cada candidato;
O total de votos nulos;
O total de votos em branco;
A percentagem de votos nulos sobre o total de votos;
A percentagem de votos em branco sobre o total de votos. Para finalizar o conjunto de votos 
tem-se o valor zero.*/
#include <iostream>
using namespace std;

int main()
{
    int numeroE,candidato;
    double nulo=0,branco=0,totalv=0;
    int joao=0,jose=0,felipe=0,marcos=0;
    
    cout<<"digite o numero total de eleitores";
    cin>>numeroE;
    
    
    for(int i=1; i<=numeroE; i++){
        
        cout<<"em qual candidato voce deseja votar?"<<endl;
        cout<<"digite 1 para joao"<<endl;
        cout<<"digite 2 para jose"<<endl;
        cout<<"digite 3 para marcos"<<endl;
        cout<<"digite 4 para felipe"<<endl;
        cout<<"digite 5 para voto nulo"<<endl;
        cout<<"digite 6 para voto em branco"<<endl;
        
        cin>>candidato;
        
        switch (candidato){
            
             case 1:
             joao++;
             totalv++;
             break;
            
             case 2:
             jose++;
             totalv++;
             break;
            
             case 3:
             marcos++;
             totalv++;
             break;
            
             case 4:
             felipe++;
             totalv++;
             break;
             
             case 5:
             nulo++;
             totalv++;
             break;
             
             case 6:
             branco++;
             totalv++;
             break;
             
             default:
             cout<<"voto invalido";
             break;
        }
    }
    if(totalv>0){
    cout<<"o numero de votos de joao e"<<joao<<endl;
    cout<<"o numero de votos de jose e"<<jose<<endl;
    cout<<"o numero de votos de felipe e"<<felipe<<endl;
    cout<<"o numero de votos de marcos e"<<marcos<<endl;
    cout<<"o numero de votos nulos e"<<nulo<<endl;
    cout<<"o numero de votos brancos e"<<branco<<endl;
    cout<<"A porcentagem de votos nulos sobre o total de votos e "<<(nulo/totalv)*100<<"%"<<endl;
    cout<<"A porcentagem de votos em branco sobre o total de votos "<<(branco/totalv)*100<<"%"<<endl;
    
        
    }else{
        cout<<"nenhum voto registrado";
        
    }
    
    
    
    return 0;
}
