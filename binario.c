#include <stdio.h>
#include <math.h>

int main(){
int N,bin,dec=0,u=1;
scanf("%d",&N);
int V[N];
for(int i=N;i>0;i--){
scanf("%d",&bin);
V[i-1]=bin;
dec+=bin*pow(2,N-u);
u++;
}
printf("%d",dec);
}