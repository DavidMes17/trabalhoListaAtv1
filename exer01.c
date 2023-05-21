#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que receba um preço de um produto, calcule e mostre o desconto e o novo preço, sabendo-se que este sofreu 10% de desconto
    float preco, desconto;
    
    printf("Digite o preço do produto: R$");
        scanf("%f", &preco);
    
    desconto = (preco * 10) / 100;
    preco -= desconto;

    printf("O valor do Produto com 10%% de desconto é de: R$%.2f", preco);
    
    return 0;
}
//revisado