#include <stdio.h>
#include<math.h>
float squareroot(int num);
int main()
{
    int num;
    printf("enter a number to find its squareroot: ");
    scanf("%d",&num);
    printf("the squareroot is: %.3f",squareroot(num));
    return 0;
}

float squareroot (int num)
{
    float sqroot;
    sqroot=sqrt(num);
    return sqroot;
}