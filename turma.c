#include "turma.h"

void inicializarEscola (int esc[TURMA][ALUNO]) {
    for (int i = 0; i < TURMA; i++) {
        for (int j = 0; j < ALUNO; j++) {
            esc[i][j] = -1;
        }
    }
}

void mostrarEscola (int esc[TURMA][ALUNO]) {
    for (int i = 0; i < TURMA; i++) {
        printf("Turma > %d\n", i+1);
        for (int j = 0; j < ALUNO; j++) {
            printf("Aluno: %d ", esc[i][j]);
        }
        printf("\n");
    }
}

int cadastrarTurma (int nTurma, int esc[TURMA][ALUNO]) {
    nTurma--;
    if (esc[nTurma][0] == -1) {
        for (int i = 0; i < ALUNO; i++ ){
            esc[nTurma][i] = 0;
        }
        return 1;
    }else{
        return -1;
    }
}

int cadastrarAluno (int nTurma, int idAluno, int esc[TURMA][ALUNO]) {
    nTurma--;
    int aluno = -1;
    if (esc[nTurma][0] != -1){
        for (int i=0; i < ALUNO; i++) {
            if (esc[nTurma][i] == 0) {
                aluno = i;
                break;
            }
        }
        if (aluno >= 0) {
            esc[nTurma][aluno] = idAluno;
            return 1;
        }
        else {
            return -1;
        }
    }
    else {
        return -1;
    }
}