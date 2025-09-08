# Sistema de Anamnese Nutricional em C

---

### **Identificação da Equipe**

* **Integrantes:** Guilherme Augusto Gouvea e Alan Rossini Paulino
* **Curso:** Análise e Desenvolvimento de Sistemas (ADS)
* **Instituição:** UniCesumar

### **Sobre o Código**

Este código é um componente essencial do nosso MVP (Produto Mínimo Viável) para um sistema de gestão de pacientes para uma clínica de nutrição. O objetivo principal deste módulo é digitalizar e centralizar o processo de anamnese, que é a coleta de informações detalhadas do paciente.

A área da saúde, especialmente a nutrição clínica, tem passado por uma transformação digital acelerada. [cite_start]A falta de sistemas integrados que permitam aos profissionais acessar rapidamente o histórico nutricional do paciente é um dos principais desafios[cite: 19]. A solução desenvolvida neste código visa preencher essa lacuna, proporcionando mais segurança, organização e praticidade.

---

### **Funcionalidades**

O código é responsável por gerenciar a coleta de dados de anamnese, uma das funcionalidades cruciais do projeto[cite: 33]. Ele permite que o usuário (um estudante ou nutricionista) navegue por um menu para registrar as seguintes informações:

* **Histórico Alimentar:** Detalhes sobre a alimentação do paciente.
* **Doenças Pré-existentes:** Registro de condições de saúde relevantes.
* **Alergias:** Informações sobre alergias ou intolerâncias.
* **Hábitos de Vida:** Descrição da rotina e hábitos do paciente.
* **Objetivos Nutricionais:** Metas do paciente em relação à sua nutrição.

O programa armazena essas informações em uma estrutura (`struct Anamnese`) e as exibe no final, servindo como uma demonstração inicial de como o prontuário eletrônico do paciente seria montado.

---

### **Tecnologias Utilizadas**

O projeto foi implementado em **Linguagem C**, conforme os requisitos da disciplina Linguagem e Técnica de Programação[cite: 60]. O código segue a lógica dos fluxogramas elaborados para a disciplina de Algoritmo e Lógica de Programação, utilizando funções para modularizar as tarefas, como exibir o menu (`show_menu`), tratar a entrada de texto (`get_text_input`) e formatar a saída com quebras de linha (`lineBreak`).

---