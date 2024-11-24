// ------- Definição de estruturas

// Acesso disciplina/média
typedef struct {
    int codigo_d;
    char nome_d[50];
    float peso_prova1;
    float peso_prova2;
    float media_aprovacao;
} Disciplina;

// Acesso aluno
typedef struct {
    int matricula;
    char nome_a[50];
} Aluno;

// Acesso turma/geral
typedef struct {
    int id;
    Disciplina disciplina;
    Aluno alunos[10];
    int qtd_alunos;
    float notas[10][2];
    float media[10];
    char aprovacao[10];
} Turma;

// Acesso professor
typedef struct {
    int id;
    char nome[50];
} Professor;


// Funções gerais

// Funções para disciplina
int cadastrarDisciplina(Disciplina disciplinas[], int qtd_disciplinas);
void listarDisciplinas();
void alterarDisciplina();
int excluirDisciplina();

// Funções para aluno
int cadastrarAluno();
void listarAlunos();
void alterarAluno();
int excluirAluno();

// Funções para professor
int cadastrarProfessor();
void listarProfessores();
void alterarProfessor();
int excluirProfessor();

// Funções para turma
int cadastrarTurma();
void listarTurmas();
void alterarTurma();
int excluirTurma();

// Função de relatório
int gerarRelatorioTurma();

// Menus de acesso
int menu_principal();
int menu_disciplinas();
int menu_alunos();
int menu_professor();
int menu_turma();
