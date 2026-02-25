/*Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. 
Depois modifique o programapara que ele mostre os números um ao lado do outro.*/

/*um abaixo do outro*/
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<21; i++){
        
        cout<<i<<endl;
    }
   
    return 0;
}



//um ao lado do outro
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<21; i++){
        
        cout<<i<<" ";
    }
   
    return 0;
}
