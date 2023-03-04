#include <stdio.h>

int main(){
    int parar = 0;
    float nota;
    printf("Digite a nota final do aluno: \n");
    scanf("%f", &nota);
    while (parar != 1){
        if (nota < 0 || nota >10){
            printf("Nota inválida. Digite a nota final do aluno: \n");
            scanf("%f", &nota);
        } else {
            printf("Nota válida. Encerrando...");
            parar = 1;
        }
    }
    return 0;
}