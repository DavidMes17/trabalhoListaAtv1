#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
time_t currentTime;
struct tm *LocalTime;
    //faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade da pessoa em anos, meses e dias
    int ano, dia;
    char mes[20];
    int mesInt = atoi(mes);

    // Obtém o tempo atual
    currentTime = time(NULL);

    // Obtém a hora local
    localTime = localtime(&currentTime);

    // Obtém o nome mês atual
    strftime(mes, sizeof(mes), "%b", localTime);

    // Obtém o dia atual
    dia = localTime->tm_mday

    printf("Digite o seu ano de nascimento: ");
        scanf("%d", &ano);

    mes = 12 - mesInt;
    

    return 0;
}