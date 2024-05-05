#include <stdio.h>

int countOnes(int num);
int OnesBtwZeros (int num);
int maxOnes (int arr[10],int length);
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("max number of ones between two zeros is: %d",OnesBtwZeros(num));
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
        else break;
        num=num >> 1;
    }

    return ones;
}
int OnesBtwZeros (int num)
{
    int onesArray[10];
    int ones=0,i,j;
    for (i=0;num!=0;i++)
    {
        if ((num%2)==0)
        {
            num=num >> 1;
            ones= countOnes(num);
        }
        if(ones != 0)
        {
            num=num >> ones;
            onesArray[i]=ones;
        }
        else num=num >> 1;  
        
    }
    // printf("array is:");
    // for (j=0;j<i;j++)
    // {
    //     printf("%d,",onesArray[j]);
    // }

    int max= maxOnes(onesArray,i);

    return max;
    
}
int maxOnes (int arr[10],int length)
{
    int max=arr[1];
    for (int i=0;i<length;i++)
    {
        if (max<arr[i])
        max=arr[i];
    }
    return max;
}