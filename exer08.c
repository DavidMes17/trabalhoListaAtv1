#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final.
    float salario, valorVenda, comissao;

    printf("Digite o valor do salário fixo: R$");
        scanf("%f", &salario);
    printf("Agora, o valor das vendas: R$");
        scanf("%f", &valorVenda);
    
    comissao = (valorVenda * 4) / 100.0;
    salario += comissao;

    printf("Sua comissão ficou no valor de R$%.2f, e seu salário será de R$%.2f", comissao, salario);
    
    return 0;
}