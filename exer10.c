#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "pt_br");
    //Sabe-se que para iluminar de forma correta os cômodos de uma casa, para cada m², deve-se usar 18W de potência. Faça um programa que receba as duas dimensões de cômodo (em metros), calcule e mostre a sua área (em m²) e a potência de iluminação que deverá ser utilizada.
    float watt, metrosBase, metrosComprimento, area;

    printf("Digite o comprimento da Base e do Comprimento em metros respectivamente: ");
        scanf("%f %f", &metrosBase, &metrosComprimento);

    area = metrosBase * metrosComprimento;
    watt = 18 * area;

    printf("A área do cômodo é de %.2fM², e será necessário %.2fW de potência", area, watt);
    
    return 0;
}
//revisado