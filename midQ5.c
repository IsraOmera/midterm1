#include <stdio.h>

int countOnes(int num);
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("%d has %d ones",num,countOnes(num));
    return 0;
}

int countOnes(int num)
{
    int ones=0;
    for (int i=0;num!=0;i++)
    {
        if ((num%2)!=0)
        {
            ones++;
        }
        num=num >> 1;
    }

    return ones;
}