#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
typedef char String[MAXSIZE];
typedef struct
{
    char ch[MAXSIZE];
    int length
}SqString;
typedef struct{
    char *ch;
    int length;
}HString;
int Index(String S,String T,int pos)
{
    int i=pos;
    int j=1;
    printf("%d %d\n",S[0],T[0]);
    while (i<=S[0]&&j<=T[0])
    {
        if (S[i]==T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            i=i-j+2;
            j=1;
        }
    }
    if (j>T[0])
    {
        return i-T[0];
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("Index:%d \n",Index("abcdefg","defg",0));
    return 0;
}