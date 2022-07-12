#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int triangle(int ,int,int);
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (triangle(a,b,c)==1)
    {
        printf("valid\n");
    }
    else
    {
        printf("not valid\n");
    }
    return 0;
}
int triangle(int a,int b,int c)
{
    if (a!=0 && b!=0 && c!=0)
    {
        if ((a+b+c)==180)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}