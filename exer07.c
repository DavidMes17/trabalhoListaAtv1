#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que receba o peso de uma pessoa, calcule e mostre o novo peso se a pessoa engordar 15% sobre o peso digitado, e o novo peso se a pessoa emagrecer 20% sobre o peso digitado
    float peso, pesoMais, pesoMenos;

    printf("Digite seu peso: ");
        scanf("%f", &peso);
    
    pesoMais = (peso * 15) / 100.0;
    pesoMenos = (peso * 20) / 100.0;
    pesoMais += peso;
    pesoMenos = peso - pesoMenos;

    printf("Se você engordar 15%%, seu novo peso será de: %.2f\n", pesoMais);
    printf("Se você emagrecer 20%%, seu novo peso será de: %.2f\n", pesoMenos);
    
    
    return 0;
}