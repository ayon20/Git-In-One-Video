#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char sentance[1000];
    int i=0;
    gets(sentance);
    int length=strlen(sentance);
    while (i<length)
    {
        if (sentance[i]=='a'||sentance[i]=='e'||sentance[i]=='i'||sentance[i]=='o'||sentance[i]=='u'||sentance[i]=='A'||sentance[i]=='E'||sentance[i]=='I'||sentance[i]=='O'||sentance[i]=='U')\
        {

        }
        else
        {
            printf("%c",sentance[i]);
            break;
        }
    i++;
    }
    return 0;
}