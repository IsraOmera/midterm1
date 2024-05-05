#include <stdio.h>
void reverseDigits(char num[10]);
int main()
{
    char num[10];
    int i;


    printf("input:");
    scanf("%s",num);
    
    reverseDigits(num);
    return 0;
   
}

void reverseDigits(char num[10])
{
    int count=0;
    char reverse[10];
    
    for(int i=0;num[i]!='\0';i++)
    {
        count++; 
    }
    
   for(int i=0;num[i]!='\0';i++)
    {
        reverse[count-1]=num[i]; 
        count--; 
       
    } 
    printf("output:%s",reverse);
}