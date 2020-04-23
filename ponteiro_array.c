#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

struct s_aluno {
    char nome[30];
    int matricula;
    float media;
    };
main(int argc, char const *argv[]){
    fflush(stdout);
      struct s_aluno aluno, *ptr = &aluno;
    
    puts("DESCRICAO:\n");
        aluno.media = 100.0;
        aluno.matricula = 1922082016;
        strcpy(aluno.nome, "Tiago");
    printf("%s\n", ptr->nome);
    printf("%d\n", ptr->matricula);
    printf("%.2f\n", ptr->media);

    return 0;
}
