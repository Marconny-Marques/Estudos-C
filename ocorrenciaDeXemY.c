#include <stdio.h>
#include <string.h>
#define tam 41
int main()
{
    char palavra[tam], X, Y;
    int i;
    printf("\ndigite a frase ");
    gets(palavra);
    printf("\nDigite o valor de X ");
    __fpurge(stdin);
    scanf("%c", &X);
    printf("\nDigite o valor de Y ");
    __fpurge(stdin);
    scanf("%c", &Y);
    for (i=0;i<tam;i++){
        if(palavra[i]==X)
            palavra[i]=Y;
    }
    printf("\nfrase modificada = %s", palavra);
    return 1;
}