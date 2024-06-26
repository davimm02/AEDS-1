#include <stdio.h>
int preencher(int X[], int Y);
int imprimir(int X[], int Y);
int main() {
int M,N;
scanf("%d %d",&M,&N);
int A[M],B[N],C[M+N];
preencher(A, M);
preencher(B, N);
for(int i=0;i<M;i++){
  C[i]=A[i];
}
for(int i=0;i<N;i++){
   C[M+i]=B[i];
}
   imprimir(A, M);
   imprimir(B, N);
   imprimir(C, M+N);
  
  return 0;}
int preencher(int X[], int Y){
  for(int i=0;i<Y;i++){
    scanf("%d",&X[i]);
  } return X[Y];
}
int imprimir(int X[], int Y){
  for(int i=0;i<Y;i++){
     printf("%d ",X[i]);
  }
  printf("\n");
}
 