/* Desenvolva um gerador de tabuada, capaz de gerar a tabuada de 
qualquer número inteiro entre 1 a 10. O usuário deve informar de 
qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:Tabuada de 5:
5 X 1 = 5
5 X 2 = 10*/

#include <iostream>

using namespace std;
int main()
{
    int n;
    
    
    cout<<"informe qual Tabuada voce deseja ver entre 0 e 10"<<endl;
    cin>>n;
    
    cout<<"tabuada de"<<n<<":"<<endl;
    
    for(int i=1; i<=10; i++){
        
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    

    
    
    
    
    
    return 0;
}
