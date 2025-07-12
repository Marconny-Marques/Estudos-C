#include <stdio.h>
#include <string.h>
#define tam 41
int main()
{
    char palavra1[tam], palavra2[tam];
    printf("\nDigite a primeira palavra ");
    gets(palavra1);
    printf("\nDigite a segunda palavra ");
    gets(palavra2);
    if (strcmp(palavra1, palavra2) < 0)
        printf("A ordem alfabética das strings é: \n%s %s", palavra1, palavra2);
    else
        printf("A ordem alfabética das strings é: \n%s %s", palavra2, palavra1);

    return 1;
}