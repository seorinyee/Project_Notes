
// Função menu principal de acesso

  int menu_principal(){
    char opcao;
      printf("\nSistema de Notas\n");
      printf("-----------------\n");
      printf("1 - Disciplinas\n");
      printf("2 - Alunos\n");
      printf("3 - Professores\n");
      printf("4 - Turmas\n");
      printf("5 - Gerar relatorio de turma\n");
      printf("0 - Sair\n");
      printf("Escolha uma opcao: ");
      scanf("%c", &opcao);
return opcao;
}

// Função menu de disciplinas
int menu_disciplinas(){
  char opcao2;
  char temp;
    scanf("%c", &temp);
    printf("\nDisciplinas\n");
    printf("------------\n");
    printf("1 - Cadastrar disciplina\n");
    printf("2 - Listar disciplinas\n");
    printf("3 - Alterar disciplina\n");
    printf("4 - Excluir disciplina\n");
    printf("0 - Voltar\n");
    printf("Escolha uma opcao: ");
    scanf("%c", &opcao2);
return opcao2;
}

// Função menu de alunos
int menu_alunos(){
  char opcao3;
  char temp2;
    scanf("%c", &temp2);
    printf("\nAlunos\n");
    printf("------------\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("3 - Alterar alunos\n");
    printf("4 - Excluir alunos\n");
    printf("0 - Voltar\n");
    printf("Escolha uma opcao: ");
    scanf("%c", &opcao3);
return opcao3;
}

// Função menu de professores
int menu_professor(){
  char opcao4;
  char temp3;
    scanf("%c", &temp3);
    printf("\nProfessores\n");
    printf("------------\n");
    printf("1 - Cadastrar professor\n");
    printf("2 - Listar professores\n");
    printf("3 - Alterar professor\n");
    printf("4 - Excluir professor\n");
    printf("0 - Voltar\n");
    printf("Escolha uma opcao: ");
    scanf("%c", &opcao4);
return opcao4;
}

// Função menu de turmas
int menu_turma(){
  char opcao5;
  char temp4;
    scanf("%c", &temp4);
    printf("\nTurmas\n");
    printf("------------\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("3 - Alterar alunos\n");
    printf("4 - Excluir alunos\n");
    printf("0 - Voltar\n");
    printf("Escolha uma opcao: ");
    scanf("%c", &opcao5);
return opcao5;
}

int gerarRelatorioTurma(){
  char opcao6;
  char temp5;
  scanf("%c", &temp5);
  printf("\nGerar relatorio de turma\n");
  printf("------------\n");
  printf("Código da disciplina: \n");
  scanf("%c", &opcao6);
  printf("Nome da disciplina: \n");
  scanf("%s", &opcao6);
  printf("Pesos das provas: \n");
  scanf("%f", &opcao6);
  printf("Média de aprovação: \n");
  scanf("%f", &opcao6);
  printf("Nome do professor: \n");
  scanf("%c", &opcao6);
  printf("------------\n");
  scanf("%c", &opcao6);
  printf("Número de matrícula: \n");
  scanf("%c", &opcao6);
  printf("Nome do aluno: \n");
  scanf("%c", &opcao6);
  printf("Notas: \n");
  scanf("%c", &opcao6);
  printf("Alunos aprovados: \n");
  scanf("%c", &opcao6);
return opcao6;
}
