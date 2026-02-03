#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

#define MAX 50

int main() {
    Aluno alunos[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Calcular media dos alunos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

        case 1:
            if (total < MAX) {
                alunos[total].id = total + 1;

                printf("Nome do aluno: ");
                scanf(" %[^\n]", alunos[total].nome);

                printf("Nota 1: ");
                scanf("%f", &alunos[total].nota1);

                printf("Nota 2: ");
                scanf("%f", &alunos[total].nota2);

                total++;
                printf("Aluno cadastrado com sucesso!\n");
            } else {
                printf("Limite de alunos atingido!\n");
            }
            break;

        case 2:
            if (total == 0) {
                printf("Nenhum aluno cadastrado.\n");
            } else {
                for (int i = 0; i < total; i++) {
                    printf("\nID: %d", alunos[i].id);
                    printf("\nNome: %s", alunos[i].nome);
                    printf("\nNota 1: %.2f", alunos[i].nota1);
                    printf("\nNota 2: %.2f\n", alunos[i].nota2);
                }
            }
            break;

        case 3:
            if (total == 0) {
                printf("Nenhum aluno cadastrado.\n");
            } else {
                for (int i = 0; i < total; i++) {
                    float media = (alunos[i].nota1 + alunos[i].nota2) / 2;
                    printf("\nAluno: %s", alunos[i].nome);
                    printf("\nMedia: %.2f\n", media);
                }
            }
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
