/* Implementar a função inverte que recebe um número unsigned int como parâmetro e retorna 
este número escrito ao contrário. Ex: 431 <-> 134. 
*/
#include <iostream>
using namespace std;

int inverte(int num){
    int numinvert=0;
    
    while(num>0){
    
    numinvert=numinvert*10+num%10;
    
    num/=10;
        
    }
      return numinvert;  
    }
    

int main()
{
    int num;
    
    cout<<"digite um num nymwero para inverter";
    cin>>num;
    
    cout<<"o numero invertido e ";
    cout<<inverte(num);

    return 0;
}
