#include <stdio.h>
#include "contatos.h"

int main() {
    int opcao = 0;

    do {
        printf("\n----Menu-----\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contato\n");
        printf("3. Excluir Contato\n");
        printf("0. Sair\n");
        printf("\nDeseja escolher uma opção?\n");

        if(scanf("%d", &opcao) != 1) {
            printf("Opção inválida");
        }

        switch (opcao)
    {
    case 1:
        adicionarContato();
        break;
    case 2:
        listarContato();   
        break;
    default:
        break;
    }

    } while (opcao != 0);
    
    return 0;
    

}