#include<stdio.h>

int sumFun (int,int);
int main()
{
    int n1,n2,sum;
    printf("enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    sum = sumFun(n1,n2);
    printf("the sum is: %d",sum);
    return 0;
}

int sumFun (int n1,int n2)
{
    int sum=n1;
    // printf("co:%d\n",count);
    

    if (sum < n2) 
       {
            sum += sumFun(sum+1,n2);       
       }
    else 
        {  
            return sum;
        }
    return sum; 

}