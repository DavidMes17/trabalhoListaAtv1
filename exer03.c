#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //faça um programa que calcule e mostre a àrea do trapézio. Sabe-se que A = ((baseMaior + baseMenor) * altura) / 2
    float baseMaior, baseMenor, altura, area;

    printf("Digite o valor da base maior: ");
        scanf("%f", &baseMaior);
    printf("Agora da base menor: ");
        scanf("%f", &baseMenor);
    printf("Agora a altura: ");
        scanf("%f", &altura);
    
    area = ((baseMaior + baseMenor) * altura) / 2.00;

    printf("A área desse trapézio é de: %.2f", area);

    return 0;
}
//revisado