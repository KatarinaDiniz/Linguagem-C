#include <stdio.h>

int main(){
    int linha, coluna;
    int matriz[3][3];
    for (linha = 0; linha <3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digitar os valores da matriz para [linha %d, coluna %d]: \n", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    printf("Veja a sua matriz: \n");
    for(linha = 0; linha <= 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}