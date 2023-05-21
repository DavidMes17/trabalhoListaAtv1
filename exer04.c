#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void){
setlocale(LC_ALL, "pt_BR");
time_t currentTime;
struct tm *localTime;

    //faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade da pessoa em anos, meses e dias

    // Obtém o tempo atual
    currentTime = time(NULL);

    // Obtém a hora local
    localTime = localtime(&currentTime);

    // Obtém o nome do mês atual
    char mes[20];
    strftime(mes, sizeof(mes), "%b", localTime);

    // Obtém o dia atual
    int dia = localTime->tm_mday;

    printf("Digite o seu ano de nascimento: ");
    int ano;
    scanf("%d", &ano);

    // Cálculo da idade em anos
    int idade = localTime->tm_year + 1900 - ano;

    // Cálculo da idade em meses
    int meses = localTime->tm_mon + 1;

    // Cálculo da idade em dias
    int dias = localTime->tm_mday;

    printf("Idade: %d anos, %d meses, %d dias\n", idade, meses, dias);
    

    return 0;
}