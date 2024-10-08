/*
Name : Mohit Gupta
Roll No. : MT2024049
Program :25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    int i = 0, childid[3];
    while (i < 3)
    {
        childid[i] = fork();
        if (childid[i] == 0)
        {
            pause();
        }
        else
        {
            printf("for parent %d chile %d's pid is %d\n", getpid(), i + 1, childid[i]);
            i++;
        }
    }

    int id, status;
    printf("select the child for which you want parent to wait from 1to 3: ");
    scanf("%d", &id);
    waitpid(childid[id - 1], &status, 0);
    printf("child %d is exited\n",childid[id-1]);
    return 0;
}

/*
./a.out
for parent 6032 chile 1's pid is 6033
for parent 6032 chile 2's pid is 6034
for parent 6032 chile 3's pid is 6035
select the child for which you want parent to wait from 1to 3: 1
*/
