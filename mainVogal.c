#include <stdio.h>
#include "vogal.h"

int main() {
    char vogal[50];
    printf("Digite uma String para removermos as vogais ");
    scanf("%s", vogal);

    trocaVogalPorEspaco(vogal);
    printf("String alterada: %s\n", vogal);


    return 0;
}