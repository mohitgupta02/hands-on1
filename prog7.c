/*
Name : Mohit Gupta
Roll No. : MT2024049
Program :7. Write a program to copy file1 into file2 ($cp file1 file2).
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argv,char *argc[]){

	int f1=open(argc[1],O_RDONLY);
	if(f1==-1){
		printf("Error in file1");
		close(f1);
	}
	
	int f2=open(argc[2],O_WRONLY | O_CREAT,S_IRWXU);
	if(f2==-1){
		printf("Error in file2");
		close(f2);
	}
	char a;
	while(read(f1,&a,1)){
		write(f2,&a,1);
	}
	printf("File Copied");
	close(f1);
	close(f2);
	return 0;
}
