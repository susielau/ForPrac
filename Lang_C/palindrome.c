#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    String str;
    scanf("%s",&str);
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]!=str[strlen(str)-i-1]){
            printf("not a palindrome!");
        }
    }
}