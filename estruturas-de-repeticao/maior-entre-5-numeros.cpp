// Faça um programa que leia 5 números e informe o maior número.*/

#include <iostream>
using namespace std;

int main()
{
    int maiorn,numero;
    
    cout<<"digite um numero";
    cin>>maiorn;
    
    for(int i=1; i<=4; i++){
        
        cout<<"digite 4 numeros"<<endl;
        cin>>numero;
        
        if(numero>maiorn){
            maiorn=numero;
            
        }
    }
    
    cout<<"o maior numero e : "<<maiorn;
    

    return 0;
}
