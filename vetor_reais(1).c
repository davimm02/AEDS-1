#include <stdio.h>
int main(void) {
//entrada
int qtdN=0,qtd;
scanf("%d",&qtd);
float N[qtd],soma=0;
for(int i=0;i<qtd;i++){
  scanf("%f",&N[i]);
  if(N[i]<0){
    qtdN=qtdN+1;
  }
  else{
    soma=soma+N[i];
  }
}
printf("%d %.0f",qtdN,soma);
























}

