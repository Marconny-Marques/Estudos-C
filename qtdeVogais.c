#include <stdio.h>
#include <string.h>
#define tam 101

int main()
{
    char frase[tam];
    int i, qtde = 0;
    printf("\nDigite a frase: ");
    gets(frase);
    for (i=0;i<strlen(frase);i++){
        if (frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u')
        qtde++;
        }
    printf("\nQtde de vogais = %d", qtde);
    return 1;
}