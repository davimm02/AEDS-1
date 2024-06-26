#include <stdio.h>

int receba();

int main() {
    int L, N, total = 0;
    
    // Leitura de L e N
    L = receba();
    N = receba();
    
    // Verificar se N é válido
    if (N > L) {
        printf("N deve ser menor ou igual a L\n");
        return 1;
    }

    // Declaração da matriz
    int matriz[L][L];

    // Leitura da matriz
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da borda do quadrado N
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                total += matriz[i][j];
            }
        }
    }

    // Impressão do resultado
    printf("Total sera: %d\n", total);

    return 0;
}

int receba() {
    int N;
    printf("digite N: ");
    scanf("%d", &N);
    return N;
}
