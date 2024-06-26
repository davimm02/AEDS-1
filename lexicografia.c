#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recebaN();

int main(void) {
    int N;
    N = recebaN();
    int tamanho[N], confia = 0, y = 0, lex = 0;
    char bolso[N][100];

    for (int h = 0; h < N; h++) {
        // Leitura da string
        fgets(bolso[h], 100, stdin);

        // Remover o caractere de nova linha, se houver
        size_t len = strlen(bolso[h]);
        if (len > 0 && bolso[h][len - 1] == '\n') {
            bolso[h][len - 1] = '\0';
        }

        // Debug: Imprime a string lida
        //printf("String %d: %s\n", h, bolso[h]);

        // Calcula o tamanho da string
        tamanho[h] = strlen(bolso[h]);
        if (tamanho[h] > confia) {
            confia = tamanho[h];
            y = h;
        }

        // Comparação lexicográfica
        if (strcmp(bolso[h], bolso[lex]) > 0) {
            lex = h;
        }

        // Debug: Mostra a string considerada maior lexicograficamente até agora
        //printf("Maior lexicograficamente até agora: %s\n", bolso[lex]);
    }

    // Resultados finais
    printf("%s\n", bolso[y]);
    printf("%s\n", bolso[lex]);

    return 0;
}

int recebaN() {
    int N;
    // Leitura do número de strings
    scanf("%d", &N);
    getchar(); // Consumir o newline que fica no buffer após scanf
    return N;
}
