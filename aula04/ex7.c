#include <stdio.h>

int main(){
    float nota_final;
    printf("Informe a nota final do aluno: \n");
    scanf("%f", &nota_final);
    if(nota_final >= 60){
        printf("Aprovado! \n");
    } else {
        if(nota_final >= 50){
            printf("Em recuperação! \n");
        } else {
            printf("Reprovado! \n");
        };
    };
}