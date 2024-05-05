#include <stdio.h>

int findUniqueNumber (int arr[7]);

int main()
{
    int arr[7];
    
    for(int i=0; i<7; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("arr[7]={");
    for(int i=0; i<7; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("}\n");
    printf("the unique number is:%d",findUniqueNumber(arr));

    return 0;
}

int findUniqueNumber (int arr[7])
{
    int uniqueFlag,uniqueNumber,i,j;

    for(i=0,j=0; i<7; j++)
    {
        if (j==0)
        {
            uniqueFlag=1;
        }
        
        if (arr[i]==arr[j] && i!=j)
        {
            uniqueFlag=0;
        }
            
        if (uniqueFlag==1 && j==4)
        {
            uniqueNumber=arr[i];
        }
        if (j==4)
        {
            j=-1,i++;
        }
    }
    return uniqueNumber;
}