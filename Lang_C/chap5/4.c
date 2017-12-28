//Problem NO.4
#include <stdio.h>
#include <math.h>
int main()
{
    char c;
    int countSpace=0,countLetter=0,countNumber=0,countOther=0;
    printf("Please enter a line of string:\n");
    while ((c=getchar())!='\n') {
        if (c==' ') countSpace++;
        else if (c>='A'&&c<='z') countLetter++;
        else if (c>='0'&&c<='9') countNumber++;
        else countOther++;
    }
    printf("Number of:\nLetters=%d,Space=%d,Numbers=%d,Others=%d\n",countLetter,countSpace,countNumber,countOther);
    return 0;
}