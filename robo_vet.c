#include <stdio.h>

int solda();
int main(){
int N = solda();
int placa[N],ponto,contagem=0,momento=0;
for(int i=0;i<N;i++){
placa[i]=0;
}
for(int i=1;i<=2*N;i++){
  scanf("%d",&ponto);
  if(placa[ponto-1]==0){
    placa[ponto-1]=1;
    contagem++;
    if(contagem==N){
      momento=i;
    }
  }
}
  printf("%d",momento);
}
int solda(){
  int pontos;
  scanf("%d",&pontos);
  return pontos;}
