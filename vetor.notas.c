#include <stdio.h>
int main(void) {
//ENTRADA
  int AL,i;
  float media=0,total=0,menorN=0,maiorN=0;
  scanf("%d",&AL);
  float notas[AL];
//PROCESSAMENTO
  for(i=0;i<AL;i++){
     scanf("%f",&notas[i]);
    total=total+notas[i];
    if(notas[i]>maiorN){
      maiorN=notas[i];
    }
      if(i==0 || notas[i]<menorN){
        menorN=notas[i];
    }
    }
   media=total/AL;
  printf("%.1f %.1f %.1f",maiorN,menorN,media);
  //as saidas tao erradas walisson
  
  
























}