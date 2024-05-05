#include <stdio.h>
#include <string.h>

void reverseWords(char[50]);

int main()
{
    char str[50]="isra omera";
    // printf("enter a string: ");
    // scanf("%s",str);
    printf("%s\n",str);

    reverseWords(str);

    return 0;
}

void reverseWords(char str[50])
{
    char word1[50],word2[50];
    int count=0,i,j;
    for(i=0; str[i]!=' '; i++)
    {
        word1[i]=str[i];
        count++;
    }
    word1[i]=0;

    for(i=count+1,j=0; str[i]!='\0'; i++,j++)
    {
        word2[j]=str[i];
    }
    word2[j]=0;
   
    strcat(word2," ");
    strcat(word2,word1);
    printf("%s",word2);
}