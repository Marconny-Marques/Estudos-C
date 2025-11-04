#include <stdio.h>
#include <string.h>

#define TURMA 3
#define ALUNO 5

void inicializarEscola (int esc[TURMA][ALUNO]); 
void mostrarEscola (int esc[TURMA][ALUNO]);
int cadastrarTurma (int nTurma, int esc[TURMA][ALUNO]);
int cadastrarAluno (int nTurma, int idAluno, int esc[TURMA][ALUNO]);