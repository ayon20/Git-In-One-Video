#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int i=0;
    while (i<N)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    i=i-1;
    while (i>=0)
    {
        printf("%d ",arr[i]);
        i--;
    }
    return 0;
}