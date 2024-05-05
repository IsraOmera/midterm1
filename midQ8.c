#include <stdio.h>
void reverseArray(int num[10]);
int main()
{
    int array[10];
    int i;


    printf("input:");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
    }
    
    reverseArray(array);
    return 0;
   
}

void reverseArray(int num[10])
{
    int count=10;
    int reverse[10];
    
    
    for(int i=0;i<10;i++)
    {
        reverse[count-1]=num[i]; 
        count--; 
       
    } 
    printf("output:{");
    for(int i=0; i<10; i++)
    {
       printf("%d,",reverse[i]);
    }
    printf("}");
    
}