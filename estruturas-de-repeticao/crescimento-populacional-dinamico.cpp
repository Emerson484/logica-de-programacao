/* Altere o programa anterior (crescimento populacional fixo) permitindo ao usuário informar as populações 
e as taxas de crescimento iniciais.Valide a entrada e permita repetir a operação.*/
#include <iostream>
using namespace std;

int main()
{
    char resposta;
    
    do{
    int popa,popb,anos=0;
    double taxaa,taxab,tolerancia=0;
    
    
    cout<<"digite a populacao a";
    cin>>popa;
    
    cout<<"digite a populacao b";
    cin>>popb;
    
    while(popa<0 || popb<0){
        cout<<"populacao negativa! digite novamente a populacao a";
    cin>>popa;
    
    cout<<"digite novamente a populacao b";
    cin>>popb;
    }
    
   
    cout<<"digite a taxa de a";
    cin>>taxaa;
    
    
    cout<<"digite a taxa de b";
    cin>>taxab;
    
     while(taxaa<0 || taxab<0){
         cout<<"erro taxa negativa!digite a taxa de a";
         cin>>taxaa;
       
    
         cout<<"digite a taxa de b";
         cin>>taxab;
        
    }
    
    taxaa= 1 + taxaa/100;
    taxab= 1 + taxab/100;
    
    
    
    
    
    
    while(popa<popb-tolerancia){
        popa*=taxaa;
        popb*=taxab;
        anos++;
    }
    
    
    cout<<"a quantidade de anos e" <<anos;
    
    cout<<"voce deseja calcular denovo? digite's' ou 'n'";
    cin>>resposta;
    
    } while( resposta=='s');
    

    return 0;
}
