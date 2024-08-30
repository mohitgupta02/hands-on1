// Mohit Gupta
// MT2024049

/*
Write a program to create a file and print the file descriptor value. Use creat ( ) system call
*/
#include<stdio.h>
#include<sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(){
	int o=creat("hello2.txt",S_IRWXU);
	printf("value of fd is %d\n",o);
	return 0;
}
