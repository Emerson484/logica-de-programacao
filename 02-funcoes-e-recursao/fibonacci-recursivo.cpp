//usar recursao para calcular os elementos da sequencia de fibonacci
# include <iostream>
using namespace std;

int fibonacci(int p){
   if(p==1){
     return 0;
   }
   if(p==2){
     return 1;
   }
   else{
     return fibonacci(p-1)+fibonacci(p-2);
   }
}
int main(){
  //cout<<fibonacci(8);
  for(int i=1;i<30;i++){
    cout<<fibonacci(i)<<endl;
  }
}
