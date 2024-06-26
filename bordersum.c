#include <stdio.h>

int receba();
int main(){
int L,N,total=0;
L=receba();
N=receba();
int matriz[L][L];
for(int i=0;i<L;i++){
    for(int j=0;j<L;j++){
        scanf("%d",&matriz[i][j]);
            }
    }
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
       if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                total += matriz[i][j];
            }
    }
}
printf("%d",total);

}
int receba(){
    int N;
    //printf("digite N");
    scanf("%d",&N);
    return N;
}