# Sistema de Anamnese Nutricional em C

---

### **Identifica��o da Equipe**

* **Integrantes:** Guilherme Augusto Gouvea e Alan Rossini Paulino
* **Curso:** An�lise e Desenvolvimento de Sistemas (ADS)
* **Institui��o:** UniCesumar

### **Sobre o C�digo**

Este c�digo � um componente essencial do nosso MVP (Produto M�nimo Vi�vel) para um sistema de gest�o de pacientes para uma cl�nica de nutri��o. O objetivo principal deste m�dulo � digitalizar e centralizar o processo de anamnese, que � a coleta de informa��es detalhadas do paciente.

A �rea da sa�de, especialmente a nutri��o cl�nica, tem passado por uma transforma��o digital acelerada. [cite_start]A falta de sistemas integrados que permitam aos profissionais acessar rapidamente o hist�rico nutricional do paciente � um dos principais desafios[cite: 19]. A solu��o desenvolvida neste c�digo visa preencher essa lacuna, proporcionando mais seguran�a, organiza��o e praticidade.

---

### **Funcionalidades**

O c�digo � respons�vel por gerenciar a coleta de dados de anamnese, uma das funcionalidades cruciais do projeto[cite: 33]. Ele permite que o usu�rio (um estudante ou nutricionista) navegue por um menu para registrar as seguintes informa��es:

* **Hist�rico Alimentar:** Detalhes sobre a alimenta��o do paciente.
* **Doen�as Pr�-existentes:** Registro de condi��es de sa�de relevantes.
* **Alergias:** Informa��es sobre alergias ou intoler�ncias.
* **H�bitos de Vida:** Descri��o da rotina e h�bitos do paciente.
* **Objetivos Nutricionais:** Metas do paciente em rela��o � sua nutri��o.

O programa armazena essas informa��es em uma estrutura (`struct Anamnese`) e as exibe no final, servindo como uma demonstra��o inicial de como o prontu�rio eletr�nico do paciente seria montado.

---

### **Tecnologias Utilizadas**

O projeto foi implementado em **Linguagem C**, conforme os requisitos da disciplina Linguagem e T�cnica de Programa��o[cite: 60]. O c�digo segue a l�gica dos fluxogramas elaborados para a disciplina de Algoritmo e L�gica de Programa��o, utilizando fun��es para modularizar as tarefas, como exibir o menu (`show_menu`), tratar a entrada de texto (`get_text_input`) e formatar a sa�da com quebras de linha (`lineBreak`).

---