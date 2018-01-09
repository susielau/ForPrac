#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
typedef char * String;

typedef struct
{
    char ch[MAXSIZE];
    int length;
} SqString;

typedef struct
{
    char *ch;
    int length;
} HString;

void get_next(String T,int *next)
{
    int i,j;
    i=1;
    j=0;
    next[1]=0;
    while (i<strlen(T))
    {
        if (j==0||T[i]==T[j])
        {
            ++i;
            ++j;
            next[i]=j;
        }
        j=next[j];
    }
}

int Index_KMP(String S, String T,int pos)
{
    int i=pos;
    int j=1;
    int next[255];
    get_next(T,next);
    while (i<=strlen(S)&&j<=strlen(T))
    {
        if(j==0||S[i]==T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j=next[j];
        }
    }
    if (j>strlen(T))
    {
        return i-strlen(T);
    }
    else
    {
        return 0;
    }
}

int main(){
    char a[MAXSIZE] = "abcdefdefg";
    char b[MAXSIZE] = "defg";
    int result = Index_KMP(a,b,0);
    printf("%d\n",result);
    return 0;
}