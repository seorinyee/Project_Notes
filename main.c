// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
#include "exec.h"

// Função principal
int main() {
  
// Váriaveis de disciplinas
Disciplina disciplinas[100];
int qtd_disciplinas = 0;

// Váriaveis de alunos
Aluno alunos[1000];
int qtd_alunos = 0;

// Váriaveis de professores
Professor professores[100];
int qtd_professores = 0;

// Váriaveis de turmas
Turma turmas[100];
int qtd_turmas = 0;
  
  
  // Abrir arquivo de acesso as disciplinas
  // FILE*f = fopen("disciplinas","rb");
  // if ( f != NULL)
  //   fread(disciplinas, sizeof(Disciplina), 100, f);
  // fclose(f);
  
  // // Abrir arquivo de acesso aos alunos
  //   f = fopen("alunos","rb");
  // if ( f != NULL)
  //   fread(alunos, sizeof(Aluno), 100, f);
  // fclose(f);
  
  // // Abrir arquivo de acesso aos professores
  //   f = fopen("professores","rb");
  // if ( f != NULL)
  //   fread(professores, sizeof(Professor), 100, f);
  // fclose(f);

  // // Abrir arquivo de acesso as turmas
  //   f = fopen("turmas","rb");
  // if ( f != NULL)
  //   fread(turmas, sizeof(Turma), 100, f);
  // fclose(f);


// Chamar função principal de menu
  char opcao = menu_principal(opcao);
  char opcao2;
  // Escolher opção de menu
  switch (opcao){
        case '1':
            opcao2 = menu_disciplinas();
                switch (opcao2) {
                    case '1':
                        cadastrarDisciplina(disciplinas, qtd_disciplinas);
                        break;
                    case '2':
                        //listarDisciplinas(disciplinas, qtd_disciplinas);
                        break;
                    case '3':
                        //alterarDisciplina(disciplinas, qtd_disciplinas);
                        break;
                    case '4':
                        //excluirDisciplina(disciplinas, qtd_disciplinas);
                        break;
                  case '5':
                        //voltar();
                        break;
                }
                  break;
    char opcao3;
        case '2':
              opcao3 = menu_alunos();
                switch (opcao3) {
                    case '1':
                        //cadastrarAluno(alunos, qtd_alunos);
                        break;
                    case '2':
                        //listarAlunos(alunos, qtd_alunos);
                        break;
                    case '3':
                        //alterarAluno(alunos, qtd_alunos);
                        break;
                    case '4':
                        //excluirAluno(alunos, qtd_alunos);
                        break;
                    case '5':
                        //voltar();
                        break;
                }
              break;    
    char opcao4;
        case '3':
          opcao4 = menu_professor();
                switch (opcao4) {
                    case '1':
                        //cadastrarProfessor(professores, qtd_professores);
                        break;
                    case '2':
                        //listarProfessores(professores, qtd_professores);
                        break;
                    case '3':
                        //alterarProfessor(professores, qtd_professores);
                        break;
                    case '4':
                        //excluirProfessor(professores, qtd_professores);
                        break;
                    case '5':
                        //voltar();
                        break;
                }
                break;
    char opcao5;
        case '4':
          menu_turma(opcao5);
                switch (opcao5) {
                    case '1':
                        //cadastrarTurma(turmas, qtd_turmas);
                        break;
                    case '2':
                        //listarTurmas(turmas, qtd_turmas);
                        break;
                    case '3':
                        //alterarTurma(turmas, qtd_turmas);
                        break;
                    case '4':
                        //excluirTurma(turmas, qtd_turmas);
                        break;
                   case '5':
                        //voltar();
                        break;
                }
                break;
    char opcao6;
        case '5':
          opcao6 = gerarRelatorioTurma();
                switch (opcao6) {
                    case '1':
                        gerarRelatorioTurma();
                        break;
                }
                break;
        }

  // Reescrever e fechar arquivo - Disciplina
  // f = fopen("disciplinas", "wb");
  // if (f != NULL)
  //   fwrite(disciplinas, sizeof(Disciplina), 100, f);
  // fclose(f);
  // return 0;

  // // Reescrever e fechar arquivo - Alunos
  // f = fopen("alunos", "wb");
  // if (f != NULL)
  //   fwrite(alunos, sizeof(Aluno), 100, f);
  // fclose(f);
  // return 0;
  
  // // Reescrever e fechar arquivo - Professores
  // f = fopen("professores", "wb");
  // if (f != NULL)
  //   fwrite(professores, sizeof(Professor), 100, f);
  // fclose(f);
  // return 0;

  // // Reescrever e fechar arquivo - Turmas
  //   f = fopen("turmas", "wb");
  // if (f != NULL)
  //   fwrite(turmas, sizeof(Turma), 100, f);
  // fclose(f);
  // return 0;
  
  
}
