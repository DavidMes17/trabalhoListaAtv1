#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL, "pt_BR");
    //. Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo. Observando os termos no plural a colocação do “e”, da vírgula entre outros. Exemplo:326 = 3 centenas, 2 dezenas e 6 unidades
    int numero;
    char numeroString[4];

    do{
    printf("Digite um número inteiro menor que 1000: ");
        scanf("%d", &numero);
}   while(numero <= 0 || numero >= 1000);

    sprintf(numeroString, "%d", numero);

    switch (strlen(numeroString)){
    case 1:

        if(numero > 1){

            printf("%d unidades", numero);

        } else{

            printf("%d unidade", numero);

        }
        break;
    
    case 2:
        break;
}

    
    return 0;
}
//revisado