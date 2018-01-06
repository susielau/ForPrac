#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
// typedef char String[MAXSIZE];
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

int Index(String S, String T, int pos)
{
    int i = pos;
    int j = 1;
    int S_len = 0;
    int index = 0;

    // printf("%d %d\n", S[0], T[0]);
    // In C lang, there is no such thing like the first element is the length of a String.
    // We can only use some func to measure the length of a char *
    // while (i <= S[0] && j <= T[0])
    printf("length of S %lu\nlength of T %lu\n",strlen(S),strlen(T));
    // or we can measure it by our own
    for(S_len = 0; S[S_len]!= '\0';S_len++);
    printf("S_len = %d\n",S_len);

    j = 0;
    while(i < (int)strlen(S) && j < (int)strlen(T))
    {
        if (S[i] == T[j])
        {
            ++i;
            ++j;
        }
        else
        {
            i = i - j + 1;
            // j = 1;
            j = 0;
        }
    }
    if (j == strlen(T) )
    {
        // return i - strlen(T);
        index = i - strlen(T) + 1;
        // index start from 1 not 0
    }
    // else
    // {
    //     return 0;
    // }
    return index;
    // It is easier to read if a function only has one `return`

}

int main()
{
    // printf("Index:%d \n", Index("abcdefg", "defg", 0));
    char a[MAXSIZE] = "abcdefdefg";
    char b[MAXSIZE] = "defg";
    int result = Index(a,b,0);
    printf("%d\n",result);
    return 0;
}