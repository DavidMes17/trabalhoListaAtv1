#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    /**
    faça um programa quereceba o raio, calcule e mostre
    ° o comprimento da esfera: C = 2 * 𝝅
    ° a área da esfera: A = 𝝅R²
    ° o volume de uma esfera: V = 3 / 4 * 𝝅R³
    */

    float raio; //usuário vai mandar
    float comprimento, area, volume; //usuário vai ver

    printf("Digite o raio da esfera: ");
        scanf("%f", &raio);
    
    comprimento = 2 * M_PI * raio;
    area = M_PI * pow(raio, 2);
    volume = 0.75 * M_PI * pow(raio, 3);

    printf("O comprimento da esfera é: %.2f, sua área é: %.2f, e seu volume é: %.2f", comprimento, area, volume);

    
    return 0;
}