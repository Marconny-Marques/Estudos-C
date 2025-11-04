#include <stdio.h>
#include "turma.h"
#include <string.h>

int escolhaDoUsuario (char mensagem[256]) {
    int escolha;
    printf("%s\n", mensagem);
    scanf("%d", &escolha);
    return escolha;
}

int validarEscolha (int escolha) {
    if (escolha >= 1 && escolha <= 5) {
        return 1;
    }
    else{
        return -1;
    }   
}

/*
void escolhaDoMenuPro (int *escolha) {    
    scanf("%d", escolha);    
    if ((escolha >= 1) && (escolha <= 5)) {
        return 1;
    }
    else{
        return -1;
    }
}
*/

void menu (){
    printf("Escolha a opção : \n (1) Cadastrar turma \n (2) Cadastrar aluno \n (3) Incluir aluno na turma \n (4) Exibir alunos de uma turma \n (5) Sair \n");
}

int main () {
    int escolha , validacao; 
    int escola[TURMA][ALUNO];
    char mensagem[256] = "";
    int turma, aluno;

    inicializarEscola(escola);
   
    do {
        menu(); 
        strcpy(mensagem,"Escolha uma opção do menu");   
        escolha = escolhaDoUsuario(mensagem);

        validacao = validarEscolha(escolha);
        if ( validacao == -1) {
            printf("Escolha inválida\n");
        }
        else{
            switch (escolha)
            {
                case 1:
                    strcpy(mensagem,"Digite a turma"); 
                    turma = escolhaDoUsuario(mensagem);
                    if (cadastrarTurma(turma, escola) == 1){
                        printf("Cadastrado com sucesso\n");
                    }
                    else{
                        printf("Não foi possivel cadastrar a turma\n");
                    }
                    break;
                case 2:
                    strcpy(mensagem,"Digite o id do Aluno"); 
                    aluno = escolhaDoUsuario(mensagem); 
                    break;
                case 3:
                    strcpy(mensagem,"Digite a turma"); 
                    turma = escolhaDoUsuario(mensagem);                    
                    if (cadastrarAluno(turma, aluno, escola) == 1){
                        printf("Cadastrado com sucesso\n");
                    }
                    else{
                        printf("Não foi possivel cadastrar o aluno\n");
                    }
                    break;                    
                case 4:
                    mostrarEscola(escola);
                    break;    
                case 5:
                    return 0;
                break;    
                
                default:
                    return 0;
            }
        }
    } while (escolha != 5);       
    return 0;
}