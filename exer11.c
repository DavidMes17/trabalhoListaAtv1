#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
    //Solicite a quantidade de homens e de mulheres de uma turma da faculdade. Em seguida calcule e exiba o percentual (separadamente) de homens e mulheres desta turma
    int homens, mulheres, total, percentoHomens, percentoMulheres;
    printf("Digite o número de homens na turma: ");
        scanf("%d", &homens);
    printf("Agora o número de mulheres: ");
        scanf("%d", &mulheres);
    
    total = homens + mulheres;
    percentoHomens = (total * homens) / 100;
    percentoMulheres = (total * mulheres) / 100;

    printf("A porcentagem do total de homens é de %d%%, e a porcentagem do total de mulheres é de %d%%", percentoHomens, percentoMulheres);

    return 0;
}