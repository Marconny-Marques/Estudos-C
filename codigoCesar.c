#include <stdio.h>
#include <string.h>
#define tam 41
int main()
{
    char palavra[tam];
    int i;
    printf("\nDigite a frase: ");
    gets(palavra);
    for (i=0;i<strlen(palavra);i++){
        if (palavra[i]!=' ')
        palavra[i]=palavra[i]+2;
    }
    printf("\nFrase modificada: ");
    puts(palavra);
    return 1;
}