#include <stdio.h>

int main(){
    char parar;
    float nota;
    do{
        printf("Digite a nota final do aluno (min: 0, máx: 10): \n");
        scanf("%f", &nota);
    } while(nota < 0 || nota > 10);
    return 0;
}