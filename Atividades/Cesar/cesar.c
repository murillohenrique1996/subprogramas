#include <stdio.h>
#include <string.h>
void decode_cesar(char[], int posicoes);
void code_cesar(char[], int posicoes);
int main()
{
    int menu,pos;
    char str[1000];
    printf("1-CODIFICAR 2-DECODIFICAR 3-SAIR");
    scanf("%d",&menu);
    switch(menu)
    {
        default : printf("INVALIDO");
        case 1:
        {
            scanf("%s %d",&str,&pos);
            code_cesar(str,pos);
            break;
        }
        case 2:
        {
            scanf("%s %d",&str,&pos);
            decode_cesar(str,pos);
            break;
        }case 3:   break;

    }

    return 0;
}
void code_cesar(char string, int posicoes)
{
    int tam,i;
    tam = strlen(string);
    for (i=0;i<=tam;i++)
    {
        string[i]+=posicoes;
    }
    printf("%s",string);
}
