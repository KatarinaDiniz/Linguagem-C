#include <stdio.h>

int main(){
    int x = 0;
    int resultado = x++;
    printf("\n Resultado x = %d", resultado);
    printf("\n X = %d", x);

    int y = 0;
    int res = ++y;
    printf("\n Resultado y = %d", res);
    printf("\n Y = %d", y);
}