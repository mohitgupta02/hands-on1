/*
Name : Mohit Gupta
Roll no.:  MT2024049

Write a program to create a Zombie state of the running program.
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    int fd;
    fd = fork();
    if (fd == 0)
    {
        printf("child pid= %d\n", getpid());
        printf("child's parent id= %d\n", getppid());
    }
    else
    {

        sleep(3);
        printf("parent pid= %d\n", getpid());
        printf("parent's child pid= %d\n", fd);
    }
    return 0;
}

/*
./a.out
child pid= 5848
child's parent id= 5847
// sleep for 3 second
parent pid= 5847
parent's child pid= 5848

*/
