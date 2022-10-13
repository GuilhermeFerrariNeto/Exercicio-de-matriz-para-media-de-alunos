#include <stdio.h>

void main(){
int l, c, ap;
float nota[3][5], media, soma;
media = 0;
soma = 0;

for(l = 0; l < 3; l++){
    for(c = 0; c < 5; c++){
        printf("quaal foi a nota %i do aluno %i: ", c+1, l+1);
        scanf("%f", &nota[l][c]);
        soma = soma + nota[l][c];
        }
    nota[l][4] = soma / 4;
    soma = 0;
    if(nota[l][4] > 5);
        ap++;
    }
printf("foram aprovados %i alunos", ap);
        }
