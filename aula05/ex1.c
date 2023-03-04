#include <stdio.h>

int main(){
    int cont = 0;

    //será executado enquanto cont for menor que 10
    while(cont < 10){
        printf("PROGRAMA \n");

        //incrementa cont para que não entre em loop infinito

        cont++;
    }
    return 0;
}