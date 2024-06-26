#include <stdio.h>
int main(void) {
//VARIAVEIS
int i,N,contagem=0;
scanf("%d",&N);
if(N<0){
  printf("Ai nao parceiro");}
else{
  for(i=1;i<=N;i++){
  if(N%i==0){
    contagem=contagem+1;
  }
}

printf("%d",contagem);
}



















  
}