#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que calcule e mostre a àrea do trapézio. Sabe-se que A = ((baseMaior + baseMenor) * altura) / 2
    float baseMaior, baseMenor, altura, area;

    printf("Digite o valor da base maior, da base menor e da altura, respectivamente: ");
        scanf("%f %f %f", &baseMaior &baseMenor &altura);
    
    area = ((baseMaior + baseMenor) * altura) / 2.00;

    printf("A área desse trapézio é de: %.2f", area);

    return 0;
}