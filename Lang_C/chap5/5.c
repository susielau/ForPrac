//Problem NO.2
#include <stdio.h>
#include <math.h>
int main(){
    int sign=1,count=0;
    double pi=0.0,n=1.0,term=1.0;
    while(fabs(term)>=1e-8){
        pi=pi+term;
        sign=-sign;
        n=n+2;
        term=sign/n;
        count++;
    }
    pi=4*pi;
    printf("pi=%10.8f\ncount=%d\n",pi,count);
    return 0;
}

//Problem NO.3
#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,c,p;
    printf("Please enter two numbers m, n:");
    scanf("%d,%d",&m,&n);
    p=m*n;
    while(n!=0){
        c=m%n;
        m=n;
        n=c;
    }
    printf("The largest common divisor:%d\n",m);
    printf("The least common multiple:%d\n",p/m);
    return 0;
}

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


//Problem NO.5
#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,sn=0,tn=0,i=0;
    printf("Please enter a,n:\n");
    scanf("%d,%d",&a,&n);
    while(i<=n){
        tn=tn+a;
        sn=tn+sn;
        a*=10;
        i++;
    }
    printf("Sum is %d\n",sn);
    return 0;
}

//Problem NO.6
#include <stdio.h>
#include <math.h>
int main()
{
    int n=1,sum=0,this=1;
    while(n<=20){
        this=this*n;
        sum+=this;
        n++;
    }
    printf("The sum is:%d\n",sum);
    return 0;
}

//Problem NO.7
#include <stdio.h>
#include <math.h>
int main()
{
    int sum=0;
    for (int i=0;i<=100;i++){
        sum+=i;
    }
    for (int i=1;i<=50;i++){
        sum+=i*i;
    }
    for (int i=1;i<=10;i++){
        sum+=1/i;
    }
    printf("The sum is %d\n",sum);
    return 0;
}

//Problem NO.8
#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k;
    for (int n=100;n<1000;n++)
    {
        i=n/100;
        j=n/10-i*10;
        k=n-i*100-j*10;
        if ((i*i*i+j*j*j+k*k*k)==n) printf("%d\n",n);
    }
    return 0;
}

//Problem NO.9
#include <stdio.h>
#include <math.h>
int main()
{
    int sum;
    for (int i=1;i<1000;i++){
        sum=0;
        for (int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if (sum==i) printf("%d\n",i);
    }
    return 0;
}


//Problem NO.10
#include <stdio.h>
int main()
{
    float f1=1,f2=2;
    float total=0.00;
    int temp;
    for (int i=0; i<20; i++)
    {
        total=total+f2/f1;
        temp=f2;
        f2=f1+2;
        f1=temp;
    }
    printf("The total is: %f\n",total);
    return 0;
}

//Problem NO.11
#include <stdio.h>
#include <math.h>
int main()
{
    double h=50,d=100;
    for (int n=10;n>1;n--){
        d+=2*h;
        h=0.5*h;
    }
    printf("sum=%f,height=%f\n",d,h);
    return 0;
}

//Problem NO.12
#include <stdio.h>
#include <math.h>
int main()
{
    int day=10,n1,n2=1,sum=1;
    while(day>0){
        n1=(n2+1)*2;
        n2=n1;
        day--;
    }
    printf("total=%d\n",n1);
    return 0;
}

//Problem No.13
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,a;
    printf("Please enter a:\n");
    scanf("%f",&a);
    x1=a/2;
    x2=0.5*(x1+a/x1);
    while (fabs(x2-x1)>=1e-5){
        x1=x2;
        x2=0.5*(x1+a/x1);
    }
    printf("x=sqrt(a):%10.2f\n",x1);
    return 0;
}

//Problem No.14

