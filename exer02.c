#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre o peso em gramas
    float pesoKg, pesoG;

    printf("Digite seu peso em KG: ");
        scanf("%f", &pesoKg);
    
    pesoG = pesoKg * 30;

    printf("seu peso em Gramas é de: %.2fg", pesoG);

    return 0;
}
//revisado