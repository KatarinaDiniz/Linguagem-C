#include <stdio.h>

int main(){
    float salario_bruto, desc_inss, desc_ir, salario_liquido;

    printf("Cálculo de Salário liquido com desconto do IR e INSS. \n");
    printf("Digite seu salário bruto: \n");
    scanf("%f", &salario_bruto);

    //cálculo do desconto do INSS
    if(salario_bruto <= 1045.0){
        desc_inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2089.60){
        desc_inss = salario_bruto * 0.09;
    } else if(salario_bruto <= 3134.40){
        desc_inss = salario_bruto * 0.12;
    } else {
        desc_inss = salario_bruto * 0.14;
    };

    //cálculo do desconto do IR
    if(salario_bruto <= 1903.98){
        desc_ir = 0;
    } else if(salario_bruto <= 2826.65){
        desc_ir = salario_bruto * 0.075;
    }else if(salario_bruto <= 3751.05) {
        desc_ir = salario_bruto * 0.15;
    }else if(salario_bruto <= 4664.68){
        desc_ir = salario_bruto * 0.225;
    } else {
        desc_ir = salario_bruto * 0.275;
    }
    salario_liquido = salario_bruto - desc_inss - desc_ir;

    printf("Desconto INSS: R$ %.2f \n", desc_inss);
    printf("Desconto IR: R$ %.2f \n", desc_ir);
    printf("Salário liquido: R$ %.2f \n", salario_liquido);

    return 0;
}