#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char sentance1[1000];
    char sentance2[1000];
    gets(sentance1);
    fflush(stdin);
    gets(sentance2);
    int first_length=strlen(sentance1);
    int sec_length=strlen(sentance2);
    int big;
    if (first_length<=sec_length)
    {
        big=sec_length;
    }
    else
    {
        big=sec_length;
    }
    int i=0;
    int first_consonent=0,first_vowals=0,sec_consonent=0,sec_vowals=0;
    while (i<big)
    {
        if (sentance1[i]=='a'||sentance1[i]=='e'||sentance1[i]=='i'||sentance1[i]=='o'||sentance1[i]=='u'||sentance1[i]=='A'||sentance1[i]=='E'||sentance1[i]=='I'||sentance1[i]=='O'||sentance1[i]=='U')
        {
            first_vowals++;
        }    
        else
        {
            first_consonent++;
        }    
        if (sentance2[i]=='a'||sentance2[i]=='e'||sentance2[i]=='i'||sentance2[i]=='o'||sentance2[i]=='u'||sentance2[i]=='A'||sentance2[i]=='E'||sentance2[i]=='I'||sentance2[i]=='O'||sentance2[i]=='U')
        {
            sec_vowals++;
        }
        else
        {
            sec_consonent++;
        }
        i++;
    }
    if (first_consonent==sec_consonent && first_vowals==sec_vowals)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 //   printf("%d\n%d\n%d\n%d\n",first_consonent,sec_consonent,first_vowals,sec_vowals);
    return 0;
}