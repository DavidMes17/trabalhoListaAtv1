#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //Solicite a quantidade de homens e de mulheres de uma turma da faculdade. Em seguida calcule e exiba o percentual (separadamente) de homens e mulheres desta turma
    float homens, mulheres, total, percentoHomens, percentoMulheres;
    printf("Digite o número de homens na turma: ");
        scanf("%f", &homens);
    printf("Agora o número de mulheres: ");
        scanf("%f", &mulheres);
    
    total = homens + mulheres;
    percentoHomens = ( homens / total) * 100;
    percentoMulheres = (mulheres / total) * 100;

    printf("A porcentagem do total de homens é de %.2f%%, e a porcentagem do total de mulheres é de %.2f%%", percentoHomens, percentoMulheres);

    return 0;
}