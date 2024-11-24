#include <stdio.h>
#include "func.h"

// Criando função da disciplina
int cadastrarDisciplina(Disciplina disciplinas[], int qtd_disciplinas) {
  printf("Código da disciplina: \n");
  scanf("%d",&disciplinas[qtd_disciplinas].codigo_d);
  
  printf("Nome da disciplina: \n");
  scanf("%s",disciplinas[qtd_disciplinas].nome_d);
  
  printf("Peso prova 1: \n");
  scanf("%f",&disciplinas[qtd_disciplinas].peso_prova1);
  
  printf("Peso prova 2: \n");
  scanf("%f",&disciplinas[qtd_disciplinas].peso_prova2);
  
  printf("Média de aprovação: \n");
  scanf("%f",&disciplinas[qtd_disciplinas].media_aprovacao);
}

//void listarDisciplinas(){
  //listar.disciplina()
//}

// Criando função do aluno

// Criando função do professor

// Criando função da turma

// Criando função relatório
