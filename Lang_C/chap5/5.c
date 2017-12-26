//
//  main.c
//  PracticeC
//
//  Created by Susie on 12/26/17.
//  Copyright © 2017 Susie. All rights reserved.
//

#include <stdio.h>

int main()
{
    //problem NO.10
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
