# include <iostream>
using namespace std;

void mult(int m1[][10],int m2[][10],int result[][10],int linhas1,int colunas1,int colunas2){
  for(int i=0;i<linhas1;i++){
     for(int j=0;j<colunas2;j++){
        for(int k=0;k<colunas1;k++){
           result[i][j]+=m1[i][k]*m2[k][j];
        }
     }
  }
}
int main(){
  int linhas1,linhas2,colunas1,colunas2;
  
  cout<<"digite o numero de linhas e colunas da matriz1"<<endl;
  cin>>linhas1>>colunas1;
  
  cout<<"digite o numero de linhas e colunas da matriz2"<<endl;
  cin>>linhas2>>colunas2;
  
  int m1[10][10],m2[10][10],result[10][10];

  cout<<"digite os elementos da matriz 1"<<endl;
  
  for(int i=0;i<linhas1;i++){
     for(int j=0;j<colunas1;j++){
        cin>>m1[i][j];
     }
  }
  
  cout<<"digite os elementos da matriz 2"<<endl;
  
  for(int i=0;i<linhas2;i++){
     for(int j=0;j<colunas2;j++){
        cin>>m2[i][j];
     }
  }
  
  mult(m1,m2,result,linhas1,colunas1,colunas2);
  
  for(int i=0;i<linhas1;i++){
     for(int j=0;j<colunas2;j++){
        cout<<result[i][j]<<" ";
     }
     cout<<" "<<endl;
  }
}
