#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct pp
{
    int star_id;
    char name[100];
    int age;
} movie_star;

float function(movie_star N[], int number)
{
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        sum = sum + N[i].age;
    }
    float average = sum / number;
    return average;
}
int main()
{
    printf("The size of structure is %d\n", sizeof(movie_star));
    printf("Enter the number of movie star:");
    int number;
    scanf("%d", &number);
    movie_star N[number];
    for (int i = 0; i < number; i++)
    {
        int j = i + 1;
        printf("\nEnter the id of %d no :", j);
        scanf("%d", &N[i].star_id);
        printf("\nEnter the name of %d no :", j);
        fflush(stdin);
        gets(N[i].name);
        printf("\nEnter the age of %d no :", j);
        scanf("%d", &N[i].age);
    }
    float avg_age = function(N, number);
    printf("\nAverage age of movie stars : %f", avg_age);
    return 0;
}