//comparar qual numero eh maior
# include <iostream>
using namespace std;
int main(){
  int n1,n2,n3,menor;
  
  cout<<"digite n1"<<endl;
  cin>>n1;
  
  cout<<"digite n2"<<endl;
  cin>>n2;
  
  cout<<"digite n3"<<endl;
  cin>>n3;
  
  if(n1==n2 && n2==n3){
     cout<<"as 3 sao iguasi"<<endl;
  }
  
  if(n1>n2 && n1>n3){
     cout<<"n1 e maior "<<endl;
  }
   else if (n2>n1 && n2>n3){
     cout<<"n2 e maior "<<endl;
  }
   else if (n3>n1 && n3>n2){
     cout<<"n3 e maior "<<endl;
  }
  
return(0);
}
