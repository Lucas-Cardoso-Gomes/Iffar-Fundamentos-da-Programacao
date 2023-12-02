#include <stdio.h>

int main()
{
    int media_aluno[49],b=1,media_turma=0;
    
    printf("Digite a Média das notas dos 50 alunos para gerar a nota media geral da turma!\n");
    while(b<=5)
    {
        printf("Digite a nota do aluno %d: ",b);
        scanf("%d", &media_aluno[b]);
        media_turma=media_turma+media_aluno[b];
        b++;
    }
    b--;
    printf("Soma das notas: %d\n", media_turma);
    printf("Quantidade de alunos: %d\n", b);
    media_turma=media_turma/b;
    printf("Média da turma: %d", media_turma);
    

    return 0;
}
