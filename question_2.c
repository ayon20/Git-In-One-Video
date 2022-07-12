#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// structure

typedef struct employee {
    int id;
    int  salary;
}Employee;

// function for maximum salary

int max(int arr[],int limit)
{
    int i=0;
    int  big=0;
    while (i<limit)
    {
        if (big<arr[i])
        {
            big=arr[i];
        }
        i++;
    }
    return big;
}

int main()
{
    int N;
    printf("Enter The Number Of Employee :");
    scanf("%d",&N);
    int i=0,m;
    Employee students;
    int  ptr[N];
    while (i<N)
    {
        printf("\nEnter The Salary Of No.%d Person :",i+1);
        scanf("%d",&students.salary);
        ptr[i]=students.salary;
        i++;
    }
    // i=0;
    // while (i<N)
    // {
    //     printf("%f\n",students[i].salary);
    //     i++;
    // }
    m=max(ptr,N);
    printf("The Highest Salary is %d\n",m);
    printf("The size of struct is %d",(sizeof(Employee)*N));
    return 0;
}