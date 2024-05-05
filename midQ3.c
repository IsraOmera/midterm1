#include <stdio.h>

void primaryNumbers(int,int);
int main()
{
    int n1,n2;
    printf("enter two numvbers\n");
    scanf("%d %d",&n1,&n2);
    primaryNumbers(n1,n2);
    return 0;
}

void primaryNumbers(int n1,int n2)
{
    
    int notPrime;
    for(int i=n1+1; i<n2; i++)
    {
        notPrime=0;
        for(int j=i-1;j>1; j--)
        {
            if((i%j) == 0) notPrime=1;
        }
        if (notPrime == 0)
        printf("%d, ",i);
    }
}