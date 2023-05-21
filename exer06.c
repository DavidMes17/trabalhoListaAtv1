#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que receba uma temperatura em celsius, calcule e mostre a temperatura em Fahrenheit. sabe-se que F = 180 * (C+32) / 100
    int tempC, tempF;

    printf("Digite a temperatura em C°: ");
        scanf("%d", &tempC);
    
    tempF = 180 *  (tempC + 32) / 100;

    printf("A temperatura em Fahrenheit é: %d", tempF);
    
    return 0;
}