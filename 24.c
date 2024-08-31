/* 
Name : Mohit Gupta
Roll No. : MT2024049

Write a program to create an orphan process.
*/

#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main(){
    int q;
    q=fork();
    if(q==0){
           sleep(30);
        printf("inside child pid= %d\n", getpid());
        printf("parent id= %d\n", getppid());
    }
    else{
       // inside parent
        sleep(10);
        printf("inside parent pid= %d\n", getpid());
        printf("child pid= %d\n", q);
    }
    return 0;
}

/*
./a.out
inside parent pid= 5924
child pid= 5925
mohit@mohit-VMware-Virtual-Platform:~/Desktop/Handson List1$ inside child pid= 5925
parent id= 1844
*/

