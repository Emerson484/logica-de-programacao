/*(8) Implementar a função int power (int base, int expoente), que retorna 
o valor de base  elevado a expoente.  */
#include <iostream>
using namespace std;
//2^3=2*2*2//

int power(int base,int expoente){
    
    int resultado=1;
    
    for(int i=1;i<=expoente;i++){
        
        resultado*=base;
    }
     return resultado;
}

int main()
{
    int base,expoente;
    
    cout<<"digite a base e o expoente";
    cin>>base;
    cin>>expoente;
    
    cout<<power(base,expoente);
    
    

    return 0;
}
