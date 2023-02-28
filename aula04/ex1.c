#include <stdio.h>

int main(){
    int idade;
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("\n Você já pode tirar sua carteira de habilitação, você é maior de 18 anos.");
    };
    return 0;
}