#include <stdio.h>
#include <string.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#define MAXSIZE 20
typedef char *String[MAXSIZE];
Status StrAssign(String T,char *chars)
{
    int i,len;
    len=strlen(chars);
    if (len>MAXSIZE)
    {
        return ERROR;
    }
    T[0]=len;
    for (i=1;i<=len;i++)
    {
        T[i]=chars[i-1];
    }
    return OK;
}

int main()
{
    String T;
    char chars='abcdef';
    StrAssign(T,&chars);
    printf("%s\n",T);
    return 0;
}