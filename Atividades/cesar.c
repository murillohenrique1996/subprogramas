#include <stdio.h>
#include <string.h>
void decode_cesar(char *, int );
void code_cesar(char *, int );
int uppercase(char*, int);
int main()
{
    int menu,pos;
    char  str[300];
    printf("1-CODIFICAR 2-DECODIFICAR 3-SAIR\n");
    scanf("%d",&menu);
    switch(menu)
    {
        default : printf("INVALIDO");
        case 1:
        {
            printf("\nINSIRA STRING P/ CODIFICAR\n");
            scanf(" %[^\n]s",str);
            scanf(" %d",&pos);
            code_cesar(str,pos);
            printf("%s",str);
            break;
        }
        case 2:
        {
            printf("\nINSIRA STRING P/ DECODIFICAR\n");
            scanf(" %[^\n]s",str);
            scanf(" %d",&pos);
            decode_cesar(str,pos);
            printf("%s",str);
            break;
        }case 3:   break;

    }
    return 0;
}
void code_cesar(char * string, int posicoes)
{
    int tam,i;
    tam = strlen(string);
    for (i=0;i<tam;i++)
    {
        if(string[i]==' ')
        {}
        else{
        string[i]+=posicoes;}
    }
}
void decode_cesar(char * string, int posicoes)
{
    int tam,i;
    tam = strlen(string);
    for (i=0;i<tam;i++)
    {
    if(string[i]==' ')
        {}
        else{
        string[i]+=posicoes;}
}

int uppercase( char * str,int pos)
{
    int i,tam;
    for(i=0;i<tam;i++)
    {
    if (str[i]>64 && str[i]<91)
    {
        if (str[i]+pos>90)
        {
            str[i]='A'+pos-1;
        }
    }
    if (str[i]>96 && str[i]<123)
    {
        if (str[i]+pos>122)
        {
            str[i]='a'+pos-1;
        }
    }
    }
    return 0;
}
