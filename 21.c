/*
Name : Mohit Gupta
Roll No. : MT2024049
Program :21. Write a program, call fork and print the parent and child process id.
*/

#include <sys/types.h> // Import for `fork` & `getpid` system call
#include <unistd.h>    // Import for `fork` & `getpid` system call
#include <stdio.h>     // Import for printf function

void main()
{
    int child, parent;

    parent = getpid();

    printf("Parent PID: %d\n", parent);

    child = fork();

    if (child != 0)
        // Only parent will enter this branch
        printf("Child PID: %d\n", child);
}

/*

Parent PID: 5579
Child PID: 5580
*/
