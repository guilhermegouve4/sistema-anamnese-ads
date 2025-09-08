#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void show_menu(); // fun��o que exibe o menu
void get_text_input(char *text, int max_size); // tratamento de strings
void lineBreak();

struct Anamnese { //declarando a estrutura do struct Anamnese
    char food_history[500];
    char preexisting_ills[500];
    char allergy[500];
    char life_habbits[500];
    char nutri_objectives[500];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    int choice;
    struct Anamnese patient_anamnese; //criando a vari�vel patient_anamnese com a estrutura de Anamnese

    memset(&patient_anamnese, 0, sizeof(struct Anamnese)); // isso eu tive que pegar do gpt, essa fun��o memset preenche um bloco de mem�ria (passado como primeiro par�metro) com o valor do segundo par�metro do tamanho do terceiro par�metro.
    //tive que fazer isso porque o n�o preenchimento consciente das vari�veis da estrutura patient_anamnese estavam sendo inicializados com lixo de mem�ria, ocasionando comportamento imprevis�vel.

    do {
        system("cls");
        show_menu();
        scanf("%d", &choice);
        
        while(getchar() != '\n'); // limpeza de buffer
        
        switch (choice) {
            case 1:
                lineBreak(1);
                printf("Descreva o hist�rico alimentar do paciente:");
                lineBreak(1);
                get_text_input(patient_anamnese.food_history, 500);
                break;
            case 2:
                lineBreak(1);
                printf("Liste as doen�as pr�-existentes:");
                lineBreak(1);
                get_text_input(patient_anamnese.preexisting_ills, 500);
                break;
            case 3:
                lineBreak(1);
                printf("Liste as alergias ou intoler�ncias:");
                lineBreak(1);
                get_text_input(patient_anamnese.allergy, 500);
                break;
            case 4:
                lineBreak(1);
                printf("Descreva os h�bitos e rotina de vida:");
                lineBreak(1);
                get_text_input(patient_anamnese.life_habbits, 500);
                break;
            case 5:
                lineBreak(1);
                printf("Descreva os objetivos nutricionais:");
                lineBreak(1);
                get_text_input(patient_anamnese.nutri_objectives, 500);
                break;
            case 6:
                lineBreak(1);
                printf("Saindo do menu de Anamnese. Dados salvos.");
                lineBreak(1);
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.");
                lineBreak(1);
                break;
        }

    } while (choice != 6);

    lineBreak(1);
    printf("--- Resumo da Anamnese ---");
    lineBreak(3);
    printf("Hist�rico Alimentar: %s", patient_anamnese.food_history);
    lineBreak(1);
    printf("Doen�as: %s", patient_anamnese.preexisting_ills);
    lineBreak(1);
    printf("Alergias: %s", patient_anamnese.allergy);
    lineBreak(1);
    printf("H�bitos: %s", patient_anamnese.life_habbits);
    lineBreak(1);
    printf("Objetivos: %s", patient_anamnese.nutri_objectives);
    lineBreak(6);
    system("pause");
    
    return 0;
}

void show_menu() {
    printf("====================================");
    lineBreak(1);
    printf("MENU DE ANAMNESE");
    lineBreak(3);
    printf("1. Hist�rico alimentar");
    lineBreak(1);
    printf("2. Doen�as preexistentes");
    lineBreak(1);
    printf("3. Alergias ou intoler�ncias");
    lineBreak(1);
    printf("4. H�bitos e rotina de vida");
    lineBreak(1);
    printf("5. Objetivos nutricionais");
    lineBreak(1);
    printf("6. Sair");
    lineBreak(3);
    printf("Selecione a op��o desejada: ");
    lineBreak(1);
}


// essa parada aqui foi sinistra de entender:
//recebe um ponteiro pra um endere�o de mem�ria de um array de chars - com esse ponteiro, podemos alterar diretamente o conte�do da vari�vel original declarada em main
//recebe tamb�m uma especifica��o de tamanho m�ximo que a fun��o deve ler, tava dando uma lida sobre buffer overflow e dizem que � importante
 void get_text_input(char *text, int max_size) {

    fgets(text, max_size, stdin);
    if (text[strlen(text) - 1] == '\n') { //strlen � fun��o importada de string.h que retorna o comprimento da string
        text[strlen(text) - 1] = '\0';    //se o �ltimo elemento do array for uma quebra de linhas, transforma ele em terminador nulo
    }
}

void lineBreak(int lines) { // basicamente uma fun��o de quebra de linha usando agora o for aprendido na aula
    for (int i = 0; i < lines; i++) {
        printf("\n");
    }
}
