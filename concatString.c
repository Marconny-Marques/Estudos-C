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
    strcat(palavra1, palavra2);
    puts(palavra1);
    return 1;
}
