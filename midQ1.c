#include <stdio.h>
void sumOfDigits(int num[10]);
int main()
{
    char no[10];
    int num[10];
    int i,count=0;


    printf("input:");
    scanf("%s",no);
    for(i=0;no[i]!='\0';i++)
    {
        num[i]=(int)(no[i])-48;
        count++;
    }

    for(i=count;i<10;i++)
    {
        num[i]=0;
    }

    sumOfDigits(num);
    return 0;
   
}

void sumOfDigits(int num[10])
{
     int sum;
    for(int i=0;i<10;i++)
    {
        sum+=num[i];
    }
    printf("output:%d",sum);
    
}