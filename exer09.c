#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que receba 2 notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota
    float nota1, nota2;
    float peso1 = 2.0, peso2 = 3.0;
    float mediaPonderada;

    do{
            printf("Digite o valor da primeira nota entre 0 e 10: ");
        scanf("%f", &nota1);
} while (nota1 < 0 || nota1 > 10);
do{
    printf("Digite o valor da segunda nota entre 0 e 10: ");
        scanf("%f", &nota2);
} while (nota2 < 0 || nota2 > 10);



    mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    printf("A média ponderada das notas é: %.2f", mediaPonderada);
    
    return 0;
}