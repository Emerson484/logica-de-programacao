/* Faça uma função que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, 
ambas subdivididas em 2 valores distintos: horas e minutos.
A função deve retornar a duração  do jogo em minutos, considerando que o tempo máximo de 
duração de um jogo é de 24 horas e  que o jogo pode começar em um dia e terminar no outro. 
*/
#include <iostream>
using namespace std;

int duracao(int hinicio, int htermino,int minicio, int mtermino){
    int tempo_inicio=(hinicio*60)+minicio;
    int tempo_termino=(htermino*60)+mtermino;
    int resultado;
    
    /* if(htermino<hinicio){
        resultado=24-hinicio;
        resultado+=htermino;
        resultado=resultado*60;*/
        if(tempo_termino<tempo_inicio){
        tempo_termino+=24*60;
        
    }
 
 return tempo_termino-tempo_inicio;
}


int main()
{ int hinicio,minicio,htermino,mtermino,resultado;
  do {  
  cout<<"digite a hora e minutos de inicio";
  cin>>hinicio>>minicio;
  
  cout<<"digite a hora e minutos de termino";
  cin>>htermino>>mtermino;}
  
  while(resultado>24);
  
  cout<<duracao(hinicio,htermino,minicio,mtermino);

    return 0;
}
