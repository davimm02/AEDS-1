#include <stdio.h>
int main(void) {
float soma=0;
int N,i;
scanf("%d",&N);
float w[N];
for(i=0;i<N;i++){
w[i]=((2*(i+1))-1)/(float) (i+1);
soma=soma + w[i];
  
}
printf("%.2f",soma);



































  
}