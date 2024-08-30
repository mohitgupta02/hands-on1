/*
Name: Mohit Gupta
Roll No.: MT2024049
Program :4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int f=open("newfile.txt",O_RDWR);
	printf("%d\n",f);
	int n=open("newfile.txt",O_EXCL);
	printf("%d\n",n);
 
}
