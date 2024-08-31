/*
Name : Mohit Gupta
Roll No. : MT2024049
Program :27. Write a program to execute ls -Rl by the following system calls
c. execle
*/

#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[],char *env[])
{
    //we have to pass environment variable
    char *path = "/bin/ls";
    execle(path, path, "-Rl" ,"prog27.txt",NULL, env);
    return 0;
}

/*
./a.out
-rw-rw-r-- 1 mohit mohit 34 Aug 31 10:41 prog27.txt


*/
