
# 👩‍🏫 Sistema de Gestão Acadêmica

Este é um projeto desenvolvido em **C** como parte de um trabalho acadêmico, com o objetivo de implementar um sistema de gestão para instituições de ensino. O sistema é capaz de gerenciar disciplinas, alunos, professores e turmas, fornecendo funcionalidades para cadastro, listagem, alteração e exclusão desses dados.

## 🛠️ Funcionalidades

- **Gerenciamento de Disciplinas**: 
  - Cadastro de disciplinas.
  - Listagem de disciplinas.
  - Alteração de dados de disciplinas.
  - Exclusão de disciplinas.

- **Gerenciamento de Alunos**: 
  - Cadastro de alunos.
  - Listagem de alunos.
  - Alteração de dados de alunos.
  - Exclusão de alunos.

- **Gerenciamento de Professores**: 
  - Cadastro de professores.
  - Listagem de professores.
  - Alteração de dados de professores.
  - Exclusão de professores.

- **Gerenciamento de Turmas**: 
  - Cadastro de turmas.
  - Listagem de turmas.
  - Alteração de dados de turmas.
  - Exclusão de turmas.

- **Relatórios**: 
  - Geração de relatórios detalhados de turmas.

## 📂 Estrutura do Projeto

- **Arquivos Principais**:
  - `main.c`: Contém a função principal e o controle do fluxo do programa.
  - `func.h` e `exec.h`: Arquivos de cabeçalho para declarações de funções auxiliares.

- **Dados**:
  - Os dados de disciplinas, alunos, professores e turmas são armazenados em arquivos binários, garantindo persistência das informações.

## 🚀 Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git
   ```
2. Navegue até o diretório do projeto:
   ```bash
   cd sistema-gestao-academica
   ```
3. Compile o código:
   ```bash
   gcc main.c -o sistema -Wall
   ```
4. Execute o programa:
   ```bash
   ./sistema
   ```

## ⚙️ Requisitos

- Um compilador C (recomendado: GCC).
- Sistema operacional compatível (Linux, macOS ou Windows com suporte a GCC).

## 📝 Observações

- Algumas funcionalidades, como **listagem** e **alteração**, ainda não estão completamente implementadas. Essas partes estão indicadas no código com comentários.
- Certifique-se de que os arquivos binários (`disciplinas`, `alunos`, `professores`, `turmas`) estão presentes no diretório raiz do projeto antes de executar o programa.

---

**Nota:** Este projeto é uma criação educacional apenas para fins de inspiração e aprendizado.
