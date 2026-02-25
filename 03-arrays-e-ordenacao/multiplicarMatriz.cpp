
# include <iostream>

/*void(int m1,int m2,int result){
   for(int i=0;i){
   
   }
}*/
using namespace std;
int main(){
  int m1[2][3],m2[3][2];
  int result[2][2];
  
  for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
        result[i][j]=0;
     }
  }
  cout<<"digite os elementos de m1"<<endl;
  
  for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
        cin>>m1[i][j];
     }
  }
  
  cout<<"digite os elementos de m2"<<endl;
  
  for(int i=0;i<3;i++){
     for(int j=0;j<2;j++){
        cin>>m2[i][j];
     }
  }
  
  for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
           result[i][j]+=m1[i][k]*m2[k][j];
        }
     }
  
  }
  
  cout<<"os elementos sao"<<endl;
  
  for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
        cout<<result[i][j]<<" ";
     }
     cout<<endl;
  }
}
